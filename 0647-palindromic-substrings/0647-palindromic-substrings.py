class Solution(object):
    def expand(self,s,l,r):
        count=0
        n=len(s)
        while l>=0 and r<n and s[l]==s[r]:
            count+=1
            l-=1
            r+=1
        return count
    def countSubstrings(self, s):
        n=len(s)
        res=0
        for i in range(n):
            res+=self.expand(s,i,i)
            res+=self.expand(s,i,i+1)

        return res
        