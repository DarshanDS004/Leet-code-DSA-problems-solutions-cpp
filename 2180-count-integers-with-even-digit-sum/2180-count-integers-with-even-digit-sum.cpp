class Solution {
public:
     int digitsum(int n){
        int sum=0;
        while(n>0){
            sum+=n%10;
            n/=10;
        }
        return sum;
     }
    int countEven(int num) {
        int count=0;
        for(int i=2;i<=num;i++){
            int dsum=digitsum(i);
            if(dsum%2==0){
                count++;
            }
        }
      return count;
        
    }
};