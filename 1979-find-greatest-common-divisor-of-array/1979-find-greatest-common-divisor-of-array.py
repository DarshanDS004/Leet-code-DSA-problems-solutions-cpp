class Solution:
    def findGCD(self, nums: list[int]) -> int:
        nums.sort();
        small=nums[0]
        large=nums[len(nums)-1]

        while small!=0:
            temp=small
            small=large%small
            large=temp
        return large
        
        