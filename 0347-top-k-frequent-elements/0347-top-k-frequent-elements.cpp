class Solution {
public:

   static bool cmp (pair<int,int>a ,pair<int,int>b){
    return a.second>b.second;
   }

    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;

        for(int i:nums){
            mp[i]++;
        }
        
        vector<pair<int,int>>res(mp.begin(),mp.end());

        sort(res.begin(),res.end(),cmp);
        vector<int>ans;
        
        for(auto & i:res){
            ans.push_back(i.first);
            if(ans.size()==k)
            break;

        }
        return ans;
     
    }


};