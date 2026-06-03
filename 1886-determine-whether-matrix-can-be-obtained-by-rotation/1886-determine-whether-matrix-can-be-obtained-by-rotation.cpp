class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n=mat.size();
        bool rotate_0=true;
        bool rotate_90=true;
        bool rotate_180=true;
        bool rotate_270=true;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                 
                 if(mat[i][j]!=target[i][j]){
                    rotate_0=false;
                 }

                 if(mat[i][j]!=target[j][n-1-i]){
                    rotate_90=false;
                 }
                    if(mat[i][j]!=target[n-1-i][n-1-j]){
                    rotate_180=false;
                 }
                  if(mat[i][j]!=target[n-1-j][i]){
                    rotate_270=false;
                 }

            }
        }
       
       return rotate_0||rotate_90 ||rotate_180 ||rotate_270;




        
    }
};