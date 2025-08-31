class Solution {
public:
    vector<vector<int>> generate(int numRows) {

       vector<vector<int>>res;
        for(int row=0;row<numRows;row++)
        {
           vector<int>level(row+1,1);
           for(int j=1;j<row;j++)
           {
            level[j]=res[row-1][j-1]+res[row-1][j];
           }
           res.push_back(level);
        }
        return res;
        
    }
};