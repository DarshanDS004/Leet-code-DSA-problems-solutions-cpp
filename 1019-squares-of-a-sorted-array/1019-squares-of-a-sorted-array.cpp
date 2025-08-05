class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        for(int i=0;i<nums.size();i++)
        {
            ans[i]=abs(nums[i]*nums[i]);
        }
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};