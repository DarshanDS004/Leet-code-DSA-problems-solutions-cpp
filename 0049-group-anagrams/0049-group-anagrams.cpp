
/*
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

*/
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string ,vector<string>>mp;
        vector<vector<string>>res;

        for(string s:strs){
           string word=s;

           vector<int>freq(26,0);

           for(char c:word){
            freq[c-'a']++;
           }

           string key;

           for(int x:freq){
            key+=to_string(x);
            key+='#';
           }
           

           mp[key].push_back(word);
        }
        

           for(auto &it :mp){

            res.push_back(it.second);
           }

        
        return res;
    }
};
