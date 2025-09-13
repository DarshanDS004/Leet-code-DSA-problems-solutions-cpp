class Solution {
public:
bool isVowel(char ch)
{
    return (ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||
    ch=='o'||ch=='O'||ch=='u'||ch=='U');
}

int findmax(unordered_map<char, int>& mp) {
    int max_frq = 0;
    for (auto [key, value] : mp) {
        if (value > max_frq) {
            max_frq = value;
        }
    }
    return max_frq;
}

    int maxFreqSum(string s) {
        unordered_map<char,int>mp1,mp2;
        for(char ch:s)
        {
                    if(isVowel(ch))
                    {
                        mp1[ch]++;
                    }
                    else
                    {
                        mp2[ch]++;
                    }

        }
         int vow=findmax(mp1);
         int con=findmax(mp2);
         return vow+con;
        

        
    }
};