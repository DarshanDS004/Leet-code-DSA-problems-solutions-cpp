class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size();
        int curr_max=0;
        int curr_min=0;
        int max_sum=INT_MIN;
        int min_sum=INT_MAX;
        int total_sum=0;

        for(int i=0;i<n;i++){
            curr_max=max(nums[i],curr_max+nums[i]);
            max_sum=max(curr_max,max_sum);

            curr_min=min(nums[i],curr_min+nums[i]);
            min_sum=min(curr_min,min_sum);

            total_sum+=nums[i]; 
        }
        if(max_sum<0)
        return max_sum;

        int circular_sum=total_sum-min_sum;

        return max(circular_sum,max_sum);
        
    }
};