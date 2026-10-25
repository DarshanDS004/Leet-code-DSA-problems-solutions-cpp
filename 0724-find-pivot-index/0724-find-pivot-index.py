class Solution:
    def pivotIndex(self, nums: list[int]) -> int:
        total=0
        for i in range(len(nums)):
            total+=nums[i]
    
        curr_sum=0
        sum=0
        for i in range(len(nums)):
            sum=total-curr_sum-nums[i]
            if sum==curr_sum:
                return i
            curr_sum+=nums[i]
        return -1

        