class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int sum=0; 
        int max_sum=0;
        for(int i=0;i<n;i++)
        {
              sum+=nums[i];
              if(sum<0){
                sum=0;
              }
              max_sum=max(max_sum,sum);
        }
        return max_sum;

        
    }
};