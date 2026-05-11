class Solution {
public:
    int alternateDigitSum(int n) {
        string s=to_string(n);
        bool pos=true;
        int sum=0;
        for(int i=0;i<s.size();i++){
            if(pos){
              int d=s[i]-'0';
              sum+=d;
                pos=false;
            }
            else{
                int d=s[i]-'0';
                sum-=d;
                pos=true;
            }

        }
        return sum;
        
    }
};