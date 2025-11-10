/*
class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size();
        int count=0;
        for(int i=0;i<n;i++)
        {
            bool a_contain=false;
             bool b_contain=false;
              bool c_contain=false;
               for(int j=i;j<n;j++)
            {
                for(int k=i;k<=j;k++)
                {
                    if(s[k]=='a')
                    a_contain=true;
                    else if(s[k]=='b')
                    {
                        b_contain=true;
                    }
                    else if(s[k]=='c')
                    {
                        c_contain=true;
                    }
                }
                if(a_contain && b_contain && c_contain)
                count++;
            }
        }
        return count;

        
    }
};

*/

/*
class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size();
        int count=0;
        for(int i=0;i<n;i++)
        {
            unordered_set<char>st;   
               for(int j=i;j<n;j++)
            {
                 st.insert(s[j]);
            
               if(st.size()==3)
               {
               count+=(n-j);
               break;
               }
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
        vector<int>freq(3,0);
        int count=0;
        int left=0,right=0;
        for( right=0;right<n;right++)
        {
            freq[s[right]-'a']++;

            while(freq[0]>0 &&freq[1]>0 &&freq[2]>0)
            {
                count+=(n-right);
                freq[s[left]-'a']--;
                left++;
            }
        }
        return count;
       
        
    }
};