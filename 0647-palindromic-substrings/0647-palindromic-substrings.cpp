/*

class Solution {
public:
bool is_palindrome(string str)
{
    int n=str.size();
    int low=0,high=n-1;
    while(low<=high)
    {
        if(str[low]!=str[high]){
            return false;
        }
        low++;
        high--;
    }

  return true;
}

    int countSubstrings(string s) {
        int n=s.size();
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
               string ans=s.substr(i,j-i+1);
               if(is_palindrome(ans)){
                count++;
               }

            }
        }
        return count;
    }
};

*/
  class Solution {
public:
int count_palindromes (string s,int left,int right)
{
    int count=0;
    while(left>=0&&  right<s.size()&&s[left]==s[right])
    {
        count++;
        left--;
        right++;
    }
    return count;
}
 
int countSubstrings(string &s) {
        int n=s.size();
        int count=0;
        for(int i=0;i<n;i++)
        {
            count+=count_palindromes(s,i,i);
            count+=count_palindromes(s,i ,i+1);
        }
        return count;
  }
};