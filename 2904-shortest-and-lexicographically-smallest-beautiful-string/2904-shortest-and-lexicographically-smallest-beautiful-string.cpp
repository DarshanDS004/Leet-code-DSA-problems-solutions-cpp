class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n=s.size();
        int left=0,right=0;
        int count=0;
        string small="";
        for(int right=0;right<n;right++){
            if(s[right]=='1')
                count++;
            if(count==k){
                while(s[left]=='0'){
                    left++;
                }
                string res=s.substr(left,right-left+1);
                if(small==""||res.size()<small.size() ||res.size()==small.size() && res<small){
                 small=res;
                }
                 left++;
                 count--;
             }
            
            
        }
        return small;
          
    }
};