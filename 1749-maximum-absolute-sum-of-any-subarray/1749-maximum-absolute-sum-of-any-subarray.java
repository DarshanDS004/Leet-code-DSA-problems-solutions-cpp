class Solution {
    public int maxAbsoluteSum(int[] nums) {
        int max_sum=0;
        int min_sum=0;
        int curr_max=0;
        int curr_min=0;

        for(int i:nums){
            curr_max=Math.max(0,curr_max+i);
            curr_min=Math.min(0,curr_min+i);
             max_sum=Math.max(max_sum,curr_max);
             min_sum=Math.min(min_sum,curr_min);
        }
        return Math.max(max_sum,Math.abs(min_sum));
        
    }
}