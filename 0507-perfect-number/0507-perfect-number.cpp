class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num<=1){
            return false;
        }
       int sum=1;
      
      int original=num;
       for(int i=2;i*i<=num;i++){
        if(num%i==0){
            sum+=i;

            int pair=num/i;
            if(pair !=i){
                sum+=pair;
            }
        }

       }
       return sum==original;
        
    }
};