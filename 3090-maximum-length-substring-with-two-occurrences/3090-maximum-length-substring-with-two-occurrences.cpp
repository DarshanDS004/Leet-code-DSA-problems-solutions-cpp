class Solution {
public:
    int maximumLengthSubstring(string s) {
        
        int count[256] = {0};
        int left = 0;
        int maxLength = 0;

        for (int right = 0; right < s.length(); right++) {
            
            count[s[right]]++;

            while (count[s[right]] > 2) {
                count[s[left]]--;
                left++;
            }

            maxLength = max(maxLength, right - left + 1);
        }

        return maxLength;
    }
};