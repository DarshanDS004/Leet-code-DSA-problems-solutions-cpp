class Solution {
    
    public boolean is_palindrome(String s,int l,int r)
    {
         int n=s.length();
         while(l<r){
            if(s.charAt(l)!=s.charAt(r))
            return false;
            l++;
            r--;
         }
         return true;
    }
    public boolean validPalindrome(String s) {
    int n=s.length();
     int left=0,right=n-1;

     while(left<right){
        if(s.charAt(left)!=s.charAt(right)){

            return is_palindrome(s,left+1,right)|| is_palindrome(s,left,right-1);
        }
        left++;
        right--;
     }
     return true;

        
    }
}