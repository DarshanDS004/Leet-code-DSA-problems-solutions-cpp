class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n=arr.size();
        if (n == 0)
        return {};
        vector<pair<int,int>>vec(n);
        for(int i=0;i<n;i++){
            vec[i]={arr[i],i};
        }
        sort(vec.begin(),vec.end());
        vector<int>res(n);
        int rank=1;
        res[vec[0].second]=rank;
        for(int i=1;i<n;i++){
            if(vec[i].first!=vec[i-1].first){
                rank++;
            }
            res[vec[i].second]=rank;
        }
        return res;
        
    }
};