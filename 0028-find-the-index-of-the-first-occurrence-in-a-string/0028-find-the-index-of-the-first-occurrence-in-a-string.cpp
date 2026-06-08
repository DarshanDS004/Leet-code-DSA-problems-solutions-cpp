class Solution {
public:

    bool is_matching(string &text, string & pat ,int start){

        for(int i=0;i<pat.size();i++){
            if(text[start+i]!=pat[i])
            return false;
        }
        return true;
    }

    int strStr(string haystack, string needle) {

        int m=haystack.size();
        int n=needle.size();
        int res=-1;
         for(int i=0;i<m;i++){
          
          if(is_matching(haystack,needle,i)){
            res=i;
            break;
          }

         }
         return res;
         
        
    }
};