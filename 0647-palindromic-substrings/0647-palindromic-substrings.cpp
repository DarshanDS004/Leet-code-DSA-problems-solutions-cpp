class Solution {
public:

    int expand(string s ,int left ,int right){
        int n=s.size();
        int maxlen=0;
        int count=0;
        while(left>=0 && right<n && s[left]==s[right]){

            count++;
            left--;
            right++;
        }

        return count;
    }
    int countSubstrings(string s) {
        
        int res=0;
        int n=s.size();
        for(int i=0;i<n;i++){

            res+=expand(s,i,i);
            res+=expand(s,i,i+1);
        }
        return res;

    }
};