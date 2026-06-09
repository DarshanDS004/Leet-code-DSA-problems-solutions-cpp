class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int n=nums.size();
        int m1=nums[0];
        int m2=nums[0];
        for(int i=0;i<n;i++){
            if(nums[i]>m1){
                m1=nums[i];

            }
            if(nums[i]<m2){
                m2=nums[i];
            }

        }
        long long  res=m1-m2;
        return k*res;

        
    }
};