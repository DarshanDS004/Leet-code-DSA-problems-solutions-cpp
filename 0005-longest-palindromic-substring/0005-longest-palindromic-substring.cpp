class Solution {
public:
   int expand(string &s ,int left ,int right){
      
      while(left>=0 && right< s.length() && s[left]==s[right]){
        left--;
        right++;
      }
      return right-left-1;
   }

    string longestPalindrome(string s) {
      int n=s.size();
      if(n==0)
      return" ";

      int maxlen=1;
      int start=0;
      for(int i=0;i<n;i++){

        int odd=expand(s,i,i);
        int even=expand(s,i,i+1);
        int curr=max(odd,even);
        if(curr>maxlen){
            maxlen=curr;
            start=i-(curr-1)/2;
        }
      }

      return s.substr(start,maxlen);

    }
};