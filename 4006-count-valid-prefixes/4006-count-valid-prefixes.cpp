class Solution {
public:
    int countValidPrefixes(string s) {
        int n=s.size();
        int ones=0;
        int zeros=0;
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1')
            ones++;
            else
            zeros++;

            if(abs(ones-zeros)<=1){
                count++;
            }
        }
        return count;
        
    }
};