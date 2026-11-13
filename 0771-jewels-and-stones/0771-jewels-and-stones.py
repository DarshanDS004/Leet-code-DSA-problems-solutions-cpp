class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        count=0
        freq={}
        for i in range(len(jewels)):
            freq[jewels[i]]=1
        
        for i in range(len(stones)):
            if stones[i] in freq:
                count+=1
        return count
            
        