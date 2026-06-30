/*
class Solution {
public:
   bool is_having(string s){
    unordered_map<int,int>mp;

    for(char c:s){
        mp[c]++;
    }
   return mp.size()==3;
    
 }
    int numberOfSubstrings(string s) {

        int n=s.size();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                string ans=s.substr(i,j-i+1);
                if(is_having(ans))
                count++;
            }
        }
        return count;
        
    }
};

*/

class Solution {
public:
    int numberOfSubstrings(string s) {
    int n=s.size();
    int left=0;
    int right=0;
    int count=0;
    unordered_map<char,int>mp;
    for(int right=0;right<n;right++)
        {
          mp[s[right]]++;

          while(mp.size()==3){
          
          count+=(n-right);

          mp[s[left]]--;
          if(mp[s[left]]==0)
          mp.erase(s[left]);

           left++;

          }
        }
        return count;
    }
};
