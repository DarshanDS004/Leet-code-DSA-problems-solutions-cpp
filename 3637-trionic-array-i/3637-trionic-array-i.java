/*
class Solution {
    static boolean is_increasing(int[]nums,int p,int q){
        for(int i=p;i<q-1;i++){
            if(nums[i]>=nums[i+1])
            return false;
        }
    
    return true;
    }

    static boolean is_decreasing(int []nums,int p,int q){
        for(int i=p;i<q-1;i++){
            if(nums[i]<=nums[i+1])
            return false;
        }
    
    return true;
    }

    public boolean isTrionic(int[] nums) {
        int n=nums.length;
        if (n < 3) return false;

        for(int i=1;i<=n-3;i++){

            for(int j=i+1;j<=n-2;j++){
                if(is_increasing(nums,0,i) &&is_decreasing(nums,i,j) && is_increasing(nums,j,n))
                return true;
            }
           
        }
        return false;
        
    }
}
*/


class Solution {

    static boolean is_increasing(int[] nums, int p, int q) {
       
        for (int i = p; i < q - 1; i++) {
            if (nums[i] >= nums[i + 1]) {
                return false;
            }
        }
        return true;
    }

    static boolean is_decreasing(int[] nums, int p, int q) {
        
        for (int i = p; i < q - 1; i++) {
            if (nums[i] <= nums[i + 1]) {
                return false;
            }
        }
        return true;
    }

    public boolean isTrionic(int[] nums) {
        int n = nums.length;
        if (n < 3) return false;

        
        for (int i = 1; i <= n - 3; i++) {
            for (int j = i + 1; j <= n - 2; j++) {

                if (is_increasing(nums, 0, i) &&
                    is_decreasing(nums, i, j) &&
                    is_increasing(nums, j, n)) {
                    return true;
                }
            }
        }
        return false;
    }
}
