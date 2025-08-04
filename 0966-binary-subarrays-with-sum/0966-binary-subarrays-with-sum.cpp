class Solution {
public:

 int less(vector<int>&nums,int goal)
 {
     if (goal < 0) 
     return 0;
    int n=nums.size();
    int sum=0,count=0,left=0;
    for(int right=0;right<n;right++)
    {
        sum+=nums[right];
        while(sum>goal)
        {
            sum-=nums[left];
            left++;
        }
        count+=right-left+1;

    }
    return count;

 }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return less(nums,goal)-less(nums,goal-1);

        
    }
};