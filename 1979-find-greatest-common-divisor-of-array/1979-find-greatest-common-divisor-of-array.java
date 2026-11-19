class Solution {
    public int findGCD(int[] nums) {
        Arrays.sort(nums);
        int n=nums.length;

         int small=nums[0];
         int large=nums[n-1];

         while(small!=0){
            int temp=small;
            small=large%small;
            large=temp;
         }
         return large;

        
    }
}