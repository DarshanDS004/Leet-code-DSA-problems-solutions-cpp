class Solution {
public:
    vector<int> merge_array(vector<int>& a, vector<int>& b) {
        int m = a.size();
        int n = b.size();
        vector<int> res;
        int i = 0, j = 0;
        while (i < m && j < n) {
            if (a[i] <= b[j]) {
                res.push_back(a[i]);
                i++;
            } else {
                res.push_back(b[j]);
                j++;
            }
        }

        while (i < m) {
            res.push_back(a[i]);
            i++;
        }
        while (j < n) {
            res.push_back(b[j]);
            j++;
        }

        return res;
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        vector<int>res=merge_array(nums1,nums2);

        int n=res.size();
        
        if(n%2==0){
            double sum=res[n/2]+res[n/2-1];
            return sum/2.00;
        }  
        else{
            return res[n/2]*1.00;
        }  
    }
};