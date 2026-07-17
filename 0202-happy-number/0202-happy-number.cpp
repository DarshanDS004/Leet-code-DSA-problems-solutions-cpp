class Solution {
public:
    long long sq_digit(int n) {
        long long ans = 0;
        while (n != 0) {
            int digit = n % 10;
            ans += digit * digit;
            n /= 10;
        }
        return ans;
    }
    bool isHappy(int n) {
        unordered_set<int> seen;

        while (n != 1 && !seen.count(n)) {
            seen.insert(n);
            n = sq_digit(n);
        }
        return n == 1;
    }
};