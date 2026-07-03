class Solution {
public:
    int smallestEvenMultiple(int n) {
        long  long  i;
        if(n>2){
          i=n;
        }
        while(true){
            if(i%2==0 && i%n==0)
            return i;
 
            i++;

        }
        return -1;
    }

};