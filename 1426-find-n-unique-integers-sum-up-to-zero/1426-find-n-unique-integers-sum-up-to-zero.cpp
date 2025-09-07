class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>res;
        int sum=0;
        for(int i=1;i<n;i++)
        {
            res.push_back(i);
            sum+=i;
        }
        res.push_back(-sum);
        return res;
        
    }
};