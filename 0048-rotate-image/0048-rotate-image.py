class Solution:
    def rotate(self, matrix: list[list[int]]) -> None:
        n=len(matrix)
        m=len(matrix[0])

        res=[[0]*n for i in range(n)]

        for i in range(n):
            for j in range(n):
                res[j][n-i-1]=matrix[i][j]


        for i in range(n):
            for j in range(n):
                matrix[i][j]=res[i][j] 


       
        