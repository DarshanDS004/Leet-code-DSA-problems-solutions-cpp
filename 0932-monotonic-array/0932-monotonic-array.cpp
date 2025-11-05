class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();
        bool increase = false;
        bool decrease = false;

        for (int i = 0; i < n - 1; i++) {
            if (nums[i] < nums[i + 1]) {
                increase = true;
            } 
            else if (nums[i] > nums[i + 1]) {
                decrease = true;
            }


            if (increase && decrease) 
                return false;
        }

        return true;
    }
};
