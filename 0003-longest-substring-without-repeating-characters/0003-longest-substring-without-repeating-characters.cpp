class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
         int j=0;
         set<char>st;
         int max_len=0;
        for(int i=0;i<n;i++){
            while(st.count(s[i])){
                st.erase(s[j]);
                j++;

            }
            
            st.insert(s[i]);
            
            max_len=max(max_len , i-j+1);
           
        }
        return max_len;
        
    }
};