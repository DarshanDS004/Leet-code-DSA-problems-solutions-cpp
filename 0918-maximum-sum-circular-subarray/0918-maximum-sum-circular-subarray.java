class Solution {
    public int maxSubarraySumCircular(int[] nums) {
        int n=nums.length;

        int curr_max=0;
        int max_sum=Integer.MIN_VALUE;
        int min_sum=Integer.MAX_VALUE;
        int curr_min=0;
        int total_sum=0;

        for(int i=0;i<n;i++){
         
         curr_max=Math.max(nums[i],curr_max+nums[i]);
         max_sum=Math.max(max_sum,curr_max);

         curr_min=Math.min(nums[i],curr_min+nums[i]);
        min_sum=Math.min(min_sum,curr_min);

        total_sum+=nums[i];

        }
        if(max_sum<0){
           return max_sum;
        }
        int circular_sum=total_sum-min_sum;

        return Math.max(circular_sum,max_sum);
        
    }
}