/*
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)
        return  false;
        while(n%2==0)
        {
          n/=2;
            
        }
        if(n==1)
        return true;
        return false;
    }
};
*/
class Solution {
public:
    bool isPowerOfTwo(int n)  {
        return n>0 &&!( n & n-1);     // or  return n>0 && not( n & n-1);      
    }
};