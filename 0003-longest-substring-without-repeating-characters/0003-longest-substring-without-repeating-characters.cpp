class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        
          int len=0,max_len=0;
        for(int i=0;i<n;i++)
        {
            vector<char>hash(256,0);
            for(int j=i;j<n;j++)
            {
               if(hash[s[j]]==1)
               break;
               hash[s[j]]=1;
               len=j-i+1;
               max_len=max(max_len ,len);
               
            }
        }
        return max_len;
    }
};