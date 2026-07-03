

/*
class Solution {
public: 
    
    bool is_matching(string &text,string &pat,int k){
        int n=text.size();
        int m=pat.size();
        for(int i=0;i<m;i++){
            if(text[i+k]!=pat[i]){
                return false;
            }
        }
        return true;

    }
    int maxRepeating(string sequence, string word) {
        int n=sequence.size();
        int m=word.size();
        vector<int>ans;
        if(m>n)
        return 0;

        for(int i=0;i<=n-m;i++){
            if(is_matching(sequence,word,i)){
                ans.push_back(i);
            }
        }
        return ans.size();
    }
};

*/

class Solution {
public: 
    
    bool is_matching(string &text, string &pat, int k) {
        int m = pat.size();
        for (int i = 0; i < m; i++) {
            if (text[k + i] != pat[i]) {
                return false;
            }
        }
        return true;
    }

    int maxRepeating(string sequence, string word) {
        int n = sequence.size();
        int m = word.size();

        if (m > n)
            return 0;

        int ans = 0;

        for (int i = 0; i <= n - m; i++) {
            int cnt = 0;
            int pos = i;

            while (pos <= n - m && is_matching(sequence, word, pos)) {
                cnt++;
                pos += m;
            }

            ans = max(ans, cnt);
        }

        return ans;
    }
};