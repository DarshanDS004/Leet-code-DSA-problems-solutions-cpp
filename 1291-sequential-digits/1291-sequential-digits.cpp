class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> res;

        int low_count = 0, high_count = 0;
        int l = low, h = high;

        while (l != 0) {
            low_count++;
            l /= 10;
        }

        while (h != 0) {
            high_count++;
            h /= 10;
        }

        for (int len = low_count; len <= high_count; len++) {

            for (int start = 1; start <= 10 - len; start++) {

                int n = start;
                string num = "";

                for (int j = 0; j < len; j++) {
                    num += char('0' + n);   
                    n++;
                }

                int val = stoi(num);

                if (val >= low && val <= high)
                    res.push_back(val);
            }
        }

        return res;
    }
};