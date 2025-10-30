class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int>res(2);
        int n=mat.size();
        int m=mat[0].size();
        int count;
        int max_count=-1;
        int ans;
        int i;


        for(i=0;i<n;i++)
        {
             count=0;
           for(int j=0;j<m;j++)
           {
              if(mat[i][j]==1)
              {
                count++;
              }
           }
           if(count>max_count)
           {
            max_count=count;
            ans=i;
         }
        }
        return {ans,max_count};
    }
};