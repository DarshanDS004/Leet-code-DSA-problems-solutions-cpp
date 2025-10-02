class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int close_sum = nums[0] + nums[1] + nums[2];  // Initialize close_sum to a valid sum
        
        for (int i = 0; i < nums.size(); i++) {
            int l = i + 1, r = nums.size() - 1;
            while (l < r) {
                int current_sum = nums[i] + nums[l] + nums[r];

                // Update the closest sum if current sum is closer to target
                if (abs(current_sum - target) < abs(close_sum - target)) {
                    close_sum = current_sum;
                }

                // Move pointers based on the comparison of current_sum with target
                if (current_sum < target) {
                    l++;  // Increase the sum by moving the left pointer to the right
                } else if (current_sum > target) {
                    r--;  // Decrease the sum by moving the right pointer to the left
                } else {
                    return current_sum;  // Exact match found
                }
            }
        }
        return close_sum;
    }
};