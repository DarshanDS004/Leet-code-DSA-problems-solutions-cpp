class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mp;
        for(char ch:s)
         mp[ch]++;
         bool odd_found=false;
         int length=0;
        for(auto [key,value]:mp)
        {
            int count=value;
            length+=(count/2)*2;
            if(count%2==1)
            {
                odd_found=true;
            }
        }
        if(odd_found)
        length++;

        return length;

        
    }
};