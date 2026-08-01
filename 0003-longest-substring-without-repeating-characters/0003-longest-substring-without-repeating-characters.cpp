
/*
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int left=0,right=0,max_len=0;
        unordered_set<char>st;

        for(int right=0;right<n;right++){

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
*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int left=0,right=0,max_len=0;
        vector<int>last_idx(256,-1);
        for(int  right=0;right<n;right++){
             
             if(last_idx[s[right]]>=left){
                left=last_idx[s[right]]+1;
             }

             last_idx[s[right]]=right;
             max_len=max(max_len,right-left+1);
        }
        return max_len;
    }
};