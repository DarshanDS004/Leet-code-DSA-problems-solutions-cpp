class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string ,vector<string>>mp;

        for(string s:strs){
            string word=s;
            sort(word.begin(),word.end());
            mp[word].push_back(s);
        }
        
        vector<vector<string>>res;

        for(auto [key,val]:mp){
            res.push_back(val);
        }
        return res;
    }
};