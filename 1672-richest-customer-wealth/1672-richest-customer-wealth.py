class Solution:
    def maximumWealth(self, accounts: list[list[int]]) -> int:
        n=len(accounts)
        m=len(accounts[0])
        max_sum=0
        for i in range(n):
            sum=0
            for j in range(m):
                sum+=accounts[i][j]
            max_sum=max(max_sum,sum)
        return max_sum
        