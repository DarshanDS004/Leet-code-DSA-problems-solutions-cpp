class Solution {
public:
    bool ispossible(vector<int>& arr, int day, int m, int k) {
        int count = 0;
        int num = 0;

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] <= day) {
                count++;
            } else {
                num += count / k;
                count = 0;
            }
        }
        num += count / k;  // leftover segment
        return num >= m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();

        long long val = 1LL * m * k;
        if (val > n) return -1;

        int min = bloomDay[0], max = bloomDay[0];
        for (int i = 0; i < n; i++) {
            if (bloomDay[i] > max) {
                max = bloomDay[i];
            }
            if (bloomDay[i] < min) {
                min = bloomDay[i];
            }
        }

        int low = min, high = max;
        int ans = -1;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (ispossible(bloomDay, mid, m, k)) {
                ans = mid;       
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return ans;  
    }
};
