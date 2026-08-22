class Solution {
public:
    int divisible(int n){
        int sum=0;
        int product=1;
        while(n!=0){
            int dig=n%10;
            sum+=dig;
            product*=dig;
            n/=10;
        }
       return  sum+product;
 }
    bool checkDivisibility(int n) {
        int res=divisible(n);
        return n%res==0;
        
    }
};