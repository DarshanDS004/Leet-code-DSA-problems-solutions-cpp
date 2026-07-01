class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int n=nums.size();
        int right=0,left=0,len=INT_MAX;
        int sum=0;

        for(int right=0;right<n;right++){
            sum+=nums[right];

            while(sum>=target){
                len=min(len ,right-left+1);
                sum-=nums[left];
                left++;
            }
        }
        return len==INT_MAX?0:len;
    }
};