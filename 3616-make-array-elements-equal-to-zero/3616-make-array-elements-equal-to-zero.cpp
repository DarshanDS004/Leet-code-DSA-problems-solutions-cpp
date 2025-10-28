class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        vector<int> ps(n + 1, 0);

        for (int i = 1; i <= n; i++) {
            ps[i] = ps[i - 1] + nums[i - 1];
        }

        for (int i = 0; i < n; i++) { 
            if (nums[i] == 0) {
                int left_sum = ps[i];
                int right_sum = ps[n] - ps[i + 1];
                if (left_sum == right_sum) {
                    ans += 2;
                } else if (abs(left_sum - right_sum) == 1) {
                    ans += 1;
                }
            }
        }
        return ans;
    }
};
