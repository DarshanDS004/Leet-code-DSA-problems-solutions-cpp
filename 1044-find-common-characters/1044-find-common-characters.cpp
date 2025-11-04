/*

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


*/



class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
      unordered_map<char,int>mp;
    
      for(char st:words[0]){
        mp[st]++;
      }
       
       for(int i=1;i<words.size();i++)
       {
          unordered_map<char,int>frq;
          for(char c:words[i])
          {
              frq[c]++;
          }

          for(auto it=mp.begin();it!=mp.end();)
          {
                if(frq.find(it->first)!=frq.end())
                {
                    it->second=min(it->second,frq[it->first]);
                    it++;
                }
                else{
                  it= mp.erase(it);
                }
           }


       }

       vector<string>res;
       
       for(auto p:mp)
       {
        for(int i=0;i<p.second;i++)
        {
            res.push_back(string(1,p.first));
        }
       }
       return res;
        
    }
};