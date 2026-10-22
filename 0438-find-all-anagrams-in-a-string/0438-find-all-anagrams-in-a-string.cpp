class Solution {
public:
  bool is_anagram(string s,string p){
       int n=s.size();
       int m=p.size();
       if(n>m){
        return false;
       }
       vector<int>freq(26,0);

       for(int i=0;i<n;i++){
        freq[s[i]-'a']++;
       }

       for(int i=0;i<m;i++){
        freq[p[i]-'a']--;
       }

       for(int i=0;i<26;i++){
        if(freq[i]!=0)
        return false;
       }

       return true;
       

  }
    vector<int> findAnagrams(string s, string p) {
        vector<int>res;
        int n=s.size();
        int m=p.size();
        int left=0;
        for(int right=0;right<n;right++){
            string ans=s.substr(right,m);
            if(is_anagram(ans,p)){
                res.push_back(right);
            }


        }
        return res;

        
    }
};