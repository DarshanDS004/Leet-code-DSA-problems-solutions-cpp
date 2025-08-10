class Solution {
public:
    int scoreOfString(string s) {
        int n=s.length();
        int total=0;
        for(int i=1;i<n;i++)
        {
            total+=abs(s[i]-s[i-1]);
        }
        return total;
        
        
    }
};