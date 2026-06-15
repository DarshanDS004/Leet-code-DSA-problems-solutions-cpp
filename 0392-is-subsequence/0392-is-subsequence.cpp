class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=s.size();
        int j=0;
        for(int i=0;i<n;i++){
            char ch=s[i];
            bool found=false;
            while(j<t.size())
            {
                if(t[j]==ch){
                    found=true;
                    j++;
                    break;
                }
                j++;
            }

            if(!found)
            return false;
        }
        return true;
    }
};