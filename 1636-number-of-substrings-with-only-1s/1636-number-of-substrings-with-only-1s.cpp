class Solution {
public:
    int numSub(string s) {
        int n=s.size();
        long long mod=1e9+7;
        
        long long consecutives=0;
        long long res=0;
        for(int i=0;i<n;i++)
        {
           if(s[i]=='1')
             {
            consecutives++;
            res+=consecutives;
            }
           else
           {
             consecutives=0;
           }
        }
        return res%mod;
    }
  
};