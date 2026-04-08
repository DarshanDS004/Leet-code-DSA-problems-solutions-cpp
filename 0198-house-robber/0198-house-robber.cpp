/*
class Solution {
public:
int helper(int index,vector<int>&arr){
    int n=arr.size();
    if(index>=n)
    return 0;
    int take=arr[index]+helper(index+2,arr);
    int not_take=helper(index+1,arr);
    return max(take ,not_take);
}
 
    int rob(vector<int>& nums) {
        return helper(0,nums);
        
    }
};

*/


class Solution {
public:
int helper(int index,vector<int>&arr,vector<int>&dp){
    int n=arr.size();
    if(index>=n)
    return 0;
    if(dp[index]!=-1)
    return dp[index];

    int take=arr[index]+helper(index+2,arr,dp);

    int not_take=helper(index+1,arr,dp);

    return dp[index]=max(take, not_take);
}


 int rob(vector<int>& nums) {
   vector<int>dp(nums.size(),-1);
   return helper(0,nums,dp);
 }
};


