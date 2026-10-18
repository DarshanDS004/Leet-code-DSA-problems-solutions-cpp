
/*
class Solution {
    public void rotate(int[][] matrix) {
        int n=matrix.length;
        int m=matrix[0].length;
        int[][] res=new int[n][n];

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                res[j][n-i-1]=matrix[i][j];
            }
        }

        for(int i=0;i<n;i++){
            matrix[i]=res[i];
        }
        
    }
}
*/


class Solution {
    public void swap(int [][] matrix,int i,int j){
        int temp=matrix[i][j];
        matrix[i][j]=matrix[j][i];
        matrix[j][i]=temp;
    }
    public void rotate(int[][] matrix) {
        int n=matrix.length;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix,i,j);
            }
        }
      
      for (int i = 0; i < n; i++) {
    int left = 0, right = n - 1;

    while (left < right) {
        int temp = matrix[i][left];
        matrix[i][left] = matrix[i][right];
        matrix[i][right] = temp;

        left++;
        right--;
    }
}
        
        
    }
}