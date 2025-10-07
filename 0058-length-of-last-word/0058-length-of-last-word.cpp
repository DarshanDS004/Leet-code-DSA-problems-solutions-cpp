class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length();
        int c=0;
        bool count=0;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]!= ' '){
                count=1;
               c++;

            }
           else if(count){

            break;
           }
        }
        return c;
        
    }
};