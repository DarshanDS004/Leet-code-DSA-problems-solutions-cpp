class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
        return false;
        unordered_map<char,int>mp;

        for(char x:s){
            mp[x]++;
        }
          for(char c:t){
            mp[c]--;
        }

        for(auto [key,val]:mp){
            if(val!=0)
            return false;
        }
        return true;
        
    }
};