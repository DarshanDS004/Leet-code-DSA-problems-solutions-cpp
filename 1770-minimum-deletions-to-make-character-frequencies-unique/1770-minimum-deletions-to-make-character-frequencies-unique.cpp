class Solution {
public:
    int minDeletions(string s) {
        int n=s.length();
        if(n==1)
        return 0;
        map<char,int>mp;
        for(char ch:s)
        {
            mp[ch]++;
        }
        set<int>st;
        int count=0;
        for(auto &i:mp)
        {
           while(i.second>0&&st.count(i.second))
           {
            i.second--;
            count++;
           }
           if(i.second>0)
           st.insert(i.second);
        }
       return count;
      

        
    }
};