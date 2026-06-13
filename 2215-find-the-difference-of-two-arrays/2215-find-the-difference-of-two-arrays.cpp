class Solution {
public:
     vector<int>find_common(vector<int>&arr1,vector<int>&arr2,int m,int n){
        vector<int>res;
        set<int>st(arr2.begin(),arr2.end());

        for(int x:arr1){
            if(!st.count(x)){
               res.push_back(x);
               st.insert(x);
            }
        }
        return res;
     }
     vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>res;
        int n1=nums1.size();
        int n2=nums2.size();
        res.push_back(find_common(nums1,nums2,n1,n2));
        res.push_back(find_common(nums2,nums1,n2,n1));
        return res;

    }
};