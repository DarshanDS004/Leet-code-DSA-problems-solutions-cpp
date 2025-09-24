


        
   



#include <vector>

class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
            int write_pointer = 0;
                    
                            // Iterate through the array and place non-val elements at the beginning
                                    for (int i = 0; i < nums.size(); ++i) {
                                                if (nums[i] != val) {
                                                                nums[write_pointer] = nums[i];
                                                                                write_pointer++;  // Move the write_pointer to the next position
                                                                                            }
                                                                                                    }
                                                                                                            
                                                                                                                    // The number of elements that are not equal to val
                                                                                                                            return write_pointer;
                                                                                                                                }
                                                                                                                                };
