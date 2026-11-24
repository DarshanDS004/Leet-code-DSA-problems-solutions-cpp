class Solution(object):
    def containsDuplicate(self, nums):
        freq={}
        for i in range(0,len(nums)):
            if nums[i] in freq:
                return True
            freq[nums[i]]=1
        return False

        """
        :type nums: List[int]
        :rtype: bool
        """
        