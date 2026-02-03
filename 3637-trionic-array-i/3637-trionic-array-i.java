class Solution {

    static boolean inc(int[] nums, int s, int e) {
        for (int i = s; i < e; i++) {
            if (nums[i] >= nums[i + 1]) {
                return false;
            }
        }
        return true;
    }

    static boolean dec(int[] nums, int s, int e) {
        for (int i = s; i < e; i++) {
            if (nums[i] <= nums[i + 1]) {
                return false;
            }
        }
        return true;
    }

    public boolean isTrionic(int[] nums) {
        int n = nums.length;

        for (int p = 1; p <= n - 3; p++) {
            for (int q = p + 1; q <= n - 2; q++) {

                if (inc(nums, 0, p) &&
                    dec(nums, p, q) &&
                    inc(nums, q, n - 1)) {
                    return true;
                }
            }
        }
        return false;
    }
}


