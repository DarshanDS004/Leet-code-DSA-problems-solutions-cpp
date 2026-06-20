class Solution {
public:
    char processStr(string s, long long k) {
        int n=s.size();
        long long len=0;
        long long max_len=0;
        
        for(char c:s){
            if(c=='*'){
              len=max(0LL,len-1);
            }
            else if(c=='#'){
                len*=2;
            }
            else if(c!='%'){
                len++;
            }
        }



        if(k>=len)
        return '.';

        for(int i=n-1;i>=0;i--){
            if(s[i]=='*'){
                len++;
                

            }
            else if(s[i]=='%'){
                k=len-1-k;
            }
            else if(s[i]=='#'){
                len/=2;

                if(k>=len){
                    k-=len;
                }
            }
            else {
                len--;
                if(k==len)
                return s[i];
            }
        }
    return '.';
        
    }
};