class Solution {
public:
 vector<vector<int>>merge_intervals(vector<vector<int>>&interval){
    int n=interval.size();
    vector<vector<int>>ans;
    for(int i=0;i<n;i++){
        if(ans.empty() || interval[i][0]>ans.back()[1])
        {
            ans.push_back(interval[i]);
        }
        else{
            ans.back()[1]=max(ans.back()[1],interval[i][1]);
        }
    }
    return ans;
 }
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans=merge_intervals(intervals);
        return ans;
       
        
    }
};