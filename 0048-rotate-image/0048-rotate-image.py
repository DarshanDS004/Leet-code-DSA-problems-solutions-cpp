"""
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

"""
class Solution:
    def rotate(self, matrix: list[list[int]]) -> None:
        n=len(matrix)
        
        for i in range(n):
            for j in range(i+1,n):
                matrix[i][j] ,matrix[j][i]=matrix[j][i],matrix[i][j]


        for i in range(n):
            left=0
            right=n-1
            while left<=right:
                matrix[i][left],matrix[i][right]=matrix[i][right],matrix[i][left]
                left+=1
                right-=1


        



       
        