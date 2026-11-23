class Solution:
    def countPrimes(self, n: int) -> int:
        if n<=2:
            return 0
        res=[True]*n
        res[0]=False
        res[0]=False
        for i in range(2,int(math.sqrt(n))+1):
            if res[i]:
                for j in range(i*i,n,i):
                    res[j]=False
        

        count=0
        for i in range(2,n):
            if res[i]:
                count+=1
        return count

        
        