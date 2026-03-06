class Solution {
public:
    bool isPalindrome(int x) {
        long rev=0, ori=x;
       

        while(x>0)
        {
          int m=x%10;
          rev=rev*10+m;
          x/=10;

          
        }
        if(rev==ori)
        return true;
        return false;
        
        
        /*string str = to_string(x);
           string st=str;
          reverse(str.begin(), str.end());
        return str==st;
        */

        
    }
};