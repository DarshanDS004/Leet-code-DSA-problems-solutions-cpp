
/*
class Solution {
public:
    int reverse(int x) {
        bool isnegative = x < 0;
        if (x == INT_MIN) {
            return 0;  
        }
        if (isnegative) {
            x = -x;
        }
        long long rev = 0;
        while (x > 0) {
            int m = x % 10;
            rev = rev * 10 + m;
            x = x / 10;
            if (rev > INT_MAX) {
                return 0;
            }
        }
        return isnegative ? -rev : rev;
    }
};
*/

class Solution {
public:
    int reverse(int x) {
        int digit;
        int rev=0;
        while(x!=0)
        {
           digit=x%10;
           x=x/10;
           if(rev>INT_MAX/10||(rev==INT_MAX/10 && digit>7))
         return 0;
         if(rev<INT_MIN/10 ||(rev==INT_MIN/10 && digit<-8))
         return 0;

            rev=rev*10+digit;
        }
        return rev;
    }
};