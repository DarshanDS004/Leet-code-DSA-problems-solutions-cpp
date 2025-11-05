class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n=accounts.size();
        int m=accounts[0].size();
        int max_sum=0;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<m;j++)
            {
                sum+=accounts[i][j];
            }
            max_sum=max(max_sum,sum);
        }
        return max_sum;
    }
};