/*
class Solution {
public:
   int helper(vector<int>& nums,int i,int n )
   {
    if(i>=n)
    {
        return 0;
    }

    int skip=helper(nums,i+1,n);
    int not_skip=nums[i]+helper(nums,i+2,n);

    return max(skip,not_skip);

 }
    int rob(vector<int>& nums) {
        int n=nums.size();
        return helper(nums,0,n);
        
    }
};
*/

class Solution {
public:
int helper(int idx,vector<int>&nums,vector<int>&dp)
{
    if(idx==0)
    return nums[idx];
    if(idx<0)
    return 0;
    if(dp[idx]!=-1)
    return dp[idx];

    int pick=nums[idx]+helper(idx-2,nums,dp);
    int not_pick=0+helper(idx-1,nums,dp);
    return dp[idx]=max(pick,not_pick);

    
}
 int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
        return helper(n-1,nums,dp);

  }
};