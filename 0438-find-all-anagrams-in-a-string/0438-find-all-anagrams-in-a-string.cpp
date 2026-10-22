
class Solution {
public:
    bool is_anagram(string s, string t) {
        if (s.size() != t.size())
            return false;

        vector<int> freq(26, 0);

        for (int i = 0; i < s.size(); i++) {
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }

        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0)
                return false;
        }

        return true;
    }

    vector<int> findAnagrams(string s, string p) {
        int n = s.size();
        int m = p.size();
        vector<int> res;

        if (m > n)
            return res;

        for (int right = 0; right <= n - m; right++) {
            string ans = s.substr(right, m);

            if (is_anagram(ans, p)) {
                res.push_back(right);
            }
        }

        return res;
    }
};
