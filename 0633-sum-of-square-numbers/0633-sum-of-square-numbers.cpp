class Solution {
public:
    bool judgeSquareSum(int c) {
        int limit = sqrt(c);
        for (int i = 0; i <= limit; i++) {
            int remain = c - i * i;
            int j = (int)sqrt(remain);
            if (j * j == remain)
                return true;
        }
        return false;
    }
};