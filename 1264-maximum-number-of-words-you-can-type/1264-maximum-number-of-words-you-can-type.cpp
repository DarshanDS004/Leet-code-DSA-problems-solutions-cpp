class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int i=0,count=0;
        int n=text.size();
        unordered_set<char>broken(brokenLetters.begin(),brokenLetters.end());
    
        while(i<n)
        {
                string word;
            while(i<n && text[i]!=' ')
            {
                
                word+=text[i];
                i++;
            
            }
            
            bool seen=false;
           
           for(char ch:word)
        {
            if(broken.count(ch))
              {
                seen=true;
                break;
              }
        }

        if(!seen)
        count++;
        while(i<n&&text[i]==' ')
        {
            i++;
        }
        


        }
        return count;
        
        
    }
};