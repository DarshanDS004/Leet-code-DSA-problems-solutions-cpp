class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        unordered_map<string ,vector<string>>mp;

        for(string w:strs){
           string s=w;
          sort(s.begin(),s.end());
           mp[s].push_back(w);
        }


        vector<vector<string>>res;

        for(auto [key,val]:mp){
            res.push_back(val);
        }
        return res;
        
    }
};