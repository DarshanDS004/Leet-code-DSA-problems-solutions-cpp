class Solution {
public:
    string sortVowels(string s) {
        string vow;
        string res;
        int n=s.length();
        int j=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||
                    s[i]=='O'||s[i]=='u'||s[i]=='U')
            {
                      vow+=s[i];
            }
        }
        sort(vow.begin(),vow.end());

        for(int i=0;i<n;i++)
        {
           if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||
                    s[i]=='O'||s[i]=='u'||s[i]=='U')
                    {
                        res+=vow[j];
                        j++;
                    }
                    else
                    {
                        res+=s[i];
                    }
        }
        return res;
        
    }
};