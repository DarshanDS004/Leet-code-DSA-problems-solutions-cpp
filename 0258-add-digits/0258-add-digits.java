class Solution {
    public int addDigits(int num) {
        int n = num;
        int sum = 0;

        while (n >= 10) {
            sum = 0;

            int m = n;

            while (m != 0) {
                sum += m % 10;
                m /= 10;
            }

            n = sum;
        }

        return n;
    }
}