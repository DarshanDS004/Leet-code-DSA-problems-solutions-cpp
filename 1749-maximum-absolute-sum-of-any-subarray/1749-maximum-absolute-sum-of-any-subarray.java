
class Solution {
    public int maxAbsoluteSum(int[] nums) {
        int sum=0;
        int min_sum=0;
        int max_sum=0;

        for(int i:nums){

            sum+=i;
            min_sum=Math.min(min_sum,sum);
            max_sum=Math.max(max_sum,sum);
        }
        return max_sum-min_sum;
        
    }
}