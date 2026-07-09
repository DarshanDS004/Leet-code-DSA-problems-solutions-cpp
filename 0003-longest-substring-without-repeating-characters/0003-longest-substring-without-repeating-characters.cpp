class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int right=0;
        int left=0;
        unordered_set<char>st;
        int max_len=0;
        for(right=0;right<n;right++){
            while(st.count(s[right])){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);
            max_len=max(max_len,right-left+1);
        }
        return max_len;
        
    }
};