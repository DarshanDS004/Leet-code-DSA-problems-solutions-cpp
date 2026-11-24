class Solution:
    def maxFrequencyElements(self, nums: List[int]) -> int:
        freq=[0]*101
        for i in range(len(nums)):
            freq[nums[i]]+=1
        
        max_freq=0
        for i in range(101):
            if freq[i]>max_freq:
                max_freq=freq[i]
        
        count=0
        for i in range(101):
            if freq[i]==max_freq:
                count+=freq[i]
        return count

        