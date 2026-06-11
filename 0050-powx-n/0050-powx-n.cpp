class Solution {
public:
    double myPow(double x, int n) {
        long long y=n;

        if(y<0){
          x=1.0/x;
          y=-y;
        }
      double res=1.0;
        while(y>0){
           if(y&1){
            res*=x;
           }

           x*=x;
           y>>=1;
        }
         
            return res;
         

        
    }
};