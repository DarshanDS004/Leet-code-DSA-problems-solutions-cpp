class Solution {
public:
    long long sumAndMultiply(int n) {
        long long x=0;
        long long sum=0;
        string s="";
        while(n!=0){
            int digit=n%10;
            if(digit!=0){
              s=to_string(digit)+s;
              sum+=digit;
            }
            n/=10;
        }
        if(!s.empty())
        x=stoi(s);

         return sum*x;
    }
};