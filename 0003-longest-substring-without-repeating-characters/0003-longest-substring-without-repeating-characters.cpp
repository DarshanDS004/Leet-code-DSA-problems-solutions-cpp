class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int max_len=0;
        for(int i=0;i<n;i++)
        {
            vector<int>arr(256,0);
            for(int j=i;j<n;j++)
            {
                if(arr[s[j]]==1)
                {
                    break;
                }
                max_len=max(max_len,j-i+1);
                arr[s[j]]=1;
            }
        }
        return max_len;

        
    }
};