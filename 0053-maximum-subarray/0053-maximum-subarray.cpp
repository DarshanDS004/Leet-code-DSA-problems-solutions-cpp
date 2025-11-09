/*
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int max_sum=nums[0];
        for(int i=0;i<n;i++)
        {
               sum+=nums[i];
               max_sum=max(max_sum,sum);
               if(sum<0)
               {
                sum=0;
               }
        }
        return max_sum;
        
    }
};
*/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n);
        dp[0]=nums[0];
        int maxi=dp[0];
        int sum=0;
        for(int i=1;i<n;i++)
        {
            dp[i]=max(nums[i],nums[i]+dp[i-1]);
            maxi=max(maxi,dp[i]);
        }
        return maxi;
    }
};