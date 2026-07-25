class Solution {
public:
  bool palindrome(string &s){
    int left=0,right=s.size()-1;

    while(left<right){
        if(s[left]!=s[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
  }
    bool isPalindrome(string s) {
        int n=s.size();
        string res="";
        for(int i=0;i<n;i++){
            if(isalnum(s[i])){
                res+=tolower(s[i]);
            }
        }
       
        
       if(palindrome(res))
        return true;
        else
        return false;
        
    }
};