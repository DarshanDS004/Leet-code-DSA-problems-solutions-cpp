class Solution {
    public long reverse_digit(int n){
        long ans=0;
        while(n!=0){
            int digit=n%10;
            ans=ans*10+digit;
            n/=10;
        }
        return ans;
    }
    public int reverse(int x) {
       

         long res=reverse_digit(x);
        if(res>Integer.MAX_VALUE ||res<Integer.MIN_VALUE)
        return 0;
        
       return (int)res;
        
    }
}