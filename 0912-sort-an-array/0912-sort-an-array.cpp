class Solution {
public:
     vector<int>merge_array(vector<int>&a,vector<int>&b){
        int m=a.size();
        int n=b.size();
        int i=0,j=0;
        vector<int>res;
        while(i<m && j<n){
            if(a[i]<=b[j]){
              res.push_back(a[i]);
              i++;
            }
            else{
               res.push_back(b[j]);
               j++;  
            }
        }

            while(i<m){
                res.push_back(a[i]);
                i++;

            }

             while(j<n){
                res.push_back(b[j]);
                j++;

            }
            return res;
        
     }
    
    vector<int>merge_sort(vector<int>& a){
        int n=a.size();
        if(n<=1)
        return a;
        int mid=n/2;
        vector<int>left(a.begin(),a.begin()+mid);
        vector<int>right(a.begin()+mid,a.end());

        left=merge_sort(left);
        right=merge_sort(right);

        return merge_array(left,right);
    }


    vector<int> sortArray(vector<int>& nums) {
        return merge_sort(nums);
        
    }
};