/*
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();

        vector<int>row(m,0);
        vector<int>cols(n,0);

        for(int i=0;i<m;i++){

            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    row[i]=1;
                    cols[j]=1;
                }
            }
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(row[i]==1||cols[j]==1){
                    matrix[i][j]=0;
                }
            }
        }

        
    }
};

*/


class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();

        bool first_row=false;
        bool first_col=false;
        
        for(int j=0;j<n;j++){
            if(matrix[0][j]==0){
                first_row=true;
            }
        }

        for(int i=0;i<m;i++){
            if(matrix[i][0]==0){
                first_col=true;
            }
        }

        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[i][j]==0){
                    matrix[0][j]=0;
                    matrix[i][0]=0;
                }
            }
        }

        for(int i=1;i<m;i++){
           for(int j=1;j<n;j++){
            if(matrix[0][j]==0||matrix[i][0]==0){
                matrix[i][j]=0;
               }
           }  

        }

        if(first_row){
            for(int j=0;j<n;j++){
                matrix[0][j]=0;
            }
        }

        if(first_col){
            for(int i=0;i<m;i++){
                matrix[i][0]=0;
            }
        }
    }
};

