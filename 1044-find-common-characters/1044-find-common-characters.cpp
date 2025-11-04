class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int>min_frq(26,INT_MAX);

        for(string &ch:words)
        {
            vector<int>freq(26,0);
            for(char c:ch)
            {
                freq[c-'a']++;
            }

            for(int i=0;i<26;i++)
            {
                min_frq[i]=min(min_frq[i],freq[i]);
            }
        }
          
          vector<string>res;
          for(int i=0;i<26;i++)
          {
            for(int j=0;j<min_frq[i];j++)
            {
                res.push_back(string(1,'a'+i));
            }
          }
          return res;
    }
};