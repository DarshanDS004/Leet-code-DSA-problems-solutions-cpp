class Solution {
public:
int expand(string s,int l,int r){
    int n=s.size();
    while(l>=0 && r<n && s[l]==s[r]){
      l--;
      r++;
    }
    return r-l-1;
}

    string longestPalindrome(string s) {
        int n=s.size();
        int max_len=0;
        int start=0;
        for(int i=0;i<n;i++){
            int odd=expand(s,i,i);
            int even=expand(s,i,i+1);
           int curr=max(odd,even);
           if(curr>max_len){
            max_len=curr;
            start=i-(curr-1)/2;

           }
        }
        return s.substr(start,max_len);
        
    }
};