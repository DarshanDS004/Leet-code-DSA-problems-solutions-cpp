class Solution {

    public void swap(int [] arr ,int left,int right){
        int temp=arr[left];
        arr[left]=arr[right];
        arr[right]=temp;
    }
    public void moveZeroes(int[] nums) {
        int n=nums.length;
        int left=0,right=0;
        for(right=0;right<n;right++){
            if(nums[right]!=0){
                swap(nums,left,right);
                left++;
            }
        }
        
    }
}