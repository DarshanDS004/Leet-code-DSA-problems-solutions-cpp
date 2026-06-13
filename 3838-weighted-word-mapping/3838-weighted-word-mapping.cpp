class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        int n=words.size();
        vector<int>wei;
         for(int i=0;i<n;i++){
            string  s=words[i];
            int sum=0;
            for(int j=0;j<s.size();j++){
               sum+=weights[s[j]-'a'];
            }
            wei.push_back(sum%26);
         }
      
         string res;
         for(int i=0;i<wei.size();i++){
            res+='z'-wei[i];
         }    
         return res;
        
    }
};