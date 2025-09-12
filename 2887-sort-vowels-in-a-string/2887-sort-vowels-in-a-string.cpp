/*
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
*/


class Solution {
public:
    string sortVowels(string s) {
        string vowel = "AEIOUaeiou";
        vector<int> freq(128, 0);
        unordered_set<char> vowSet(vowel.begin(), vowel.end());
        int n = s.length();
        for (char c : s) {
            if (vowSet.count(c)) {
                freq[c]++;
            }
        }
        int j = 0;
        for (int i = 0; i < n; ++i) {
            if (vowSet.count(s[i])) {
                while (j < vowel.size() && freq[vowel[j]] == 0) {
                    j++;
                }
                s[i] = vowel[j];
                freq[vowel[j]]--;
            }
        }
        return s;
    }
};
