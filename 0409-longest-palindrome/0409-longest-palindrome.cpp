

class Solution {
public:
    int longestPalindrome(string s) {
        int n=s.size();
        unordered_map<char,int>mp;
        for(char c:s){
            mp[c]++;
        }
        bool hasOdd=false;
        int ans=0;
        for(auto [key,val]:mp){
            if(val%2==0)
            ans+=val;

            else{
                ans+=val-1;
                hasOdd=true;
            }
        }
        
        if(hasOdd){
            ans++;
        }
        return ans;
    }
};

