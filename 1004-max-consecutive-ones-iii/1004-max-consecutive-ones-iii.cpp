class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int max_len=0;
        int left=0,right=0;
        int zcount=0;
        for(int right=0;right<n;right++){
                if(nums[right]==0)
                zcount++;

                while(zcount>k){
                    if(nums[left]==0)
                    zcount--;
                    left++;
                }
                max_len=max(max_len,right-left+1);
        }
      return max_len;
    }
};