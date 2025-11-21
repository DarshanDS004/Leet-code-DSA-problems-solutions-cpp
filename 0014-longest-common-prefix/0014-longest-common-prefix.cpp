class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        if(n==0)
        return "";

        string res="";
        for(int i=0;i<strs[0].length();i++)
        {
            char currChar= strs[0][i];
            for(int j=1;j<n;j++)
            {
                if(i>strs[j].length()||currChar!=strs[j][i])
                {
                    return res;
                }
            }
            res+=currChar;
        }
        return res;
    }
};

 