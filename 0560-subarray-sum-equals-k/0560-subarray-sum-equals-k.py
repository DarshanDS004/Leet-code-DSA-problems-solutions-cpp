class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        sum=0
        count=0
        mp={}
        for i in nums:
            sum+=i
            if sum==k:
                count+=1
            if sum-k in mp:
                count+=mp[sum-k]
            mp[sum]=mp.get(sum,0)+1
        
        return count
        