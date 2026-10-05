class Solution {
    public void swap(char[] arr ,int l, int r){
        char temp=arr[l];
        arr[l]=arr[r];
        arr[r]=temp;
        
    }
    public void reverseString(char[] s) {
        int n=s.length;
        int left=0,right=n-1;
        while(left<=right){
           swap(s,left,right);
           left++;
           right--;
        }
        
    }
}