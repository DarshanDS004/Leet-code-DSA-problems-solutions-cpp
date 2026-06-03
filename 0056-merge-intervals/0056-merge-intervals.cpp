/*
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>res;
        res.push_back(intervals[0]);
         for(int i=1;i<n;i++){
            if(intervals[i][0]<=res.back()[1]){
                res.back()[1]=max(res.back()[1],intervals[i][1]);
            }
            else{
                res.push_back(intervals[i]);
            }
         }
         return res;
        
    }
};
*/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        int idx=0;
        for(int i=1;i<n;i++){
            if(intervals[i][0]<=intervals[idx][1]){
                intervals[idx][1]=max(intervals[i][1],intervals[idx][1]);
                
            }
            else{
                idx++;
                intervals[idx]=intervals[i];
                
            }
        }
         intervals.resize(idx + 1);

        return intervals;
    }
};