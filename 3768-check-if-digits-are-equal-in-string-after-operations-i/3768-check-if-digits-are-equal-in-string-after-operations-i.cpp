class Solution {
public:
    bool hasSameDigits(string s) {
        while (s.size() > 2) {
            string res = "";
            int n = s.size();
            
            for (int i = 1; i < n; i++) {
                int n1 = s[i - 1] - '0';
                int n2 = s[i] - '0';
                res += to_string((n1 + n2) % 10);
            }
            
            s = res;
        }
        return s[0] == s[1];
    }
};
