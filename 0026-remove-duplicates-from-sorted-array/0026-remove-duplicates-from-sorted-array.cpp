


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[i - 1]){
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};



















/*class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
    if (n == 0) return 0; // Edge case: empty array

    int k = 1; // Start from the second position, since the first element is always unique
    for (int i = 1; i < n; i++) {
        if (nums[i] != nums[i - 1]) {
            nums[k] = nums[i]; // Place the unique element at position k
            k++; // Increment k to indicate the next unique element's position
        }
    }

    return k; // k will represent the number of unique elements
}
        
    
};*/