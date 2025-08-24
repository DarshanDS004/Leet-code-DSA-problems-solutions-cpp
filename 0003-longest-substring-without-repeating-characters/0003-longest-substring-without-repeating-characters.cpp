class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int left=0;
        int max_len=0,len=0;
         set<char>st;
        for(int i=0;i<n;i++)
        {
           while(st.find(s[i])!=st.end())
           {
            st.erase(s[left]);
            left++;
           }
           st.insert(s[i]);
           max_len=max(max_len,i-left+1);
        
        }
        return max_len;
    }
};
