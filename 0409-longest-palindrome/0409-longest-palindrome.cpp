
/*
class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mp;
        for(char ch:s)  // we can use vector as well 
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
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> freq(128, 0); // ASCII size

        for (char ch : s) {
            freq[ch]++;
        }

        int length = 0;
        bool oddFound = false;

        for (int count : freq) {
            length += (count / 2) * 2;
            if (count % 2 == 1) oddFound = true;
        }

        if (oddFound) length++;

        return length;
    }
};
