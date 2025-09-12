class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> str;
    int i = 0;
    int n = s.length();

    while (i < n) {
        string word = "";

    
        while (i < n && s[i] == ' ') i++;

        while (i < n && s[i] != ' ') {
            word += s[i];
            i++;
        }

        if (!word.empty()) {
            str.push_back(word);
        }
    }
    if(pattern.size()!=str.size())
    return false;
    unordered_map<char,string>charToword;
    unordered_map<string,char>wordTochar;



    for(int i=0;i<pattern.size();i++)
    {
        char ch=pattern[i];
        string w=str[i];
        if(charToword.count(ch))
        {
            if(charToword[ch]!=w)
            return false;
        }
        else
        {
            charToword[ch]=w;
        }
        


      if(wordTochar.count(w))
        {
            if(wordTochar[w]!=ch)
            return false;
        }
        else
        {
            wordTochar[w]=ch;
        }
        
    }
    return true;
        
        
    }
};