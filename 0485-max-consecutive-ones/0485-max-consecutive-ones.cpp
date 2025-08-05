class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int left=0;
        int maxlen=0,count=0;
        for(int right=0;right<n;right++)
        {
            if(nums[right]==1)
            count++;
            else
            {
                count=0;

            }
            maxlen=max(count,maxlen);
        }
        return maxlen;

        
    }
};