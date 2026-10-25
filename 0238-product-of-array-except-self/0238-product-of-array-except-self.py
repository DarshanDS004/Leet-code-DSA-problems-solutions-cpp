"""
  class Solution:
    def productExceptSelf(self, nums: list[int]) -> list[int]:

        res=[]
        for i in range(len(nums)):
            prod=1
            for j in range(len(nums)):
                if i!=j:
                    prod*=nums[j]
                    
            res.append(prod)
        return res
"""
class Solution:
     def productExceptSelf(self, nums: list[int]) -> list[int]:
        n=len(nums)
        res=[1]*n
        for i in range(1,len(nums)):
            res[i]=res[i-1]*nums[i-1]
        
        suffix=1
        for i in range(n-1,-1,-1):
            res[i]*=suffix
            suffix*=nums[i]
        
        return res