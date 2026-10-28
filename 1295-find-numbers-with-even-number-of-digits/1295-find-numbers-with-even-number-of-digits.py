class Solution:
    def count_digit(self,n):

        count=0
        while n>0:
            count+=1
            n//=10
        return count

        
    def findNumbers(self, nums: list[int]) -> int:
        count=0
        for i in range(len(nums)):
            ans=self.count_digit(nums[i])
            if ans%2==0:
                count+=1
        return count

        