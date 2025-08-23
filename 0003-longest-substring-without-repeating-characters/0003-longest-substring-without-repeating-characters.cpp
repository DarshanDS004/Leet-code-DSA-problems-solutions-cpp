class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int left=0,maxlen=0;
        unordered_map<char,int>mp;
        for(int i=0;i<n;i++)
        {
            if(mp.find(s[i])!=mp.end())
            {
               
                left=max(left,mp[s[i]]+1);
            }
            mp[s[i]]=i;
            maxlen=max(maxlen,i-left+1);
        }
        return maxlen;
        
    }
};