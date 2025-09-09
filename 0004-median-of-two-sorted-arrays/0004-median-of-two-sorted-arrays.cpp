class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        int total = m + n;

        // Merge nums2 into nums1
        nums1.resize(m + n);  // Make space for merged array
        int i = m - 1;        // Pointer for nums1 original elements
        int j = n - 1;        // Pointer for nums2
        int k = m + n - 1;    // Pointer for merged nums1

        // Merge from back to front
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }

        // If any elements left in nums2
        while (j >= 0) {
            nums1[k--] = nums2[j--];
        }

        // Now find the median
        if (total % 2 == 0) {
            // Even number of elements — average of two middle values
            return (nums1[total / 2 - 1] + nums1[total / 2]) / 2.0;
        } else {
            // Odd number of elements — middle value
            return nums1[total / 2];
        }
    }
};