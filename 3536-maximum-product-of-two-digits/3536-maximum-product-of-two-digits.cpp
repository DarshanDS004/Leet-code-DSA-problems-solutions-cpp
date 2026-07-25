class Solution {
public:
    int maxProduct(int n) {
        int max_digit=-1;
        int sec_max=-1;
        
        while(n!=0){
            int digit=n%10;
            if(digit>max_digit){
                sec_max=max_digit;
                max_digit=digit;
            }
            else if(digit>sec_max){
                sec_max=digit;
            }
            n/=10;
        }
        return sec_max*max_digit;
        
    }
};