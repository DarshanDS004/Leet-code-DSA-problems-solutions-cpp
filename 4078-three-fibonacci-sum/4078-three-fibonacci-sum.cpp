class Solution {
public:
    bool check(int a,int b, int n){
        int c=a+b;
        if(a+b+c==n)
        return true;

        if(a+b+c>n)
        return false;

        return check(b,c,n);
    }
    bool threeFibonacciSum(int n) {
        return check(0,1,n);
        
    }
};