/*
class Solution {
public:
    int climbStairs(int n) {
        if(n==0||n==1)
        return 1;
        return climbStairs(n-1)+climbStairs(n-2);
        
        
    }
};
*/


class Solution {
public:
 int helper(int n,unordered_map<int,int>&memori)
 {
     if(n==0||n==1)
        return 1;
    if( memori.find(n)==memori.end())
    {
        memori[n]=helper(n-1,memori)+helper(n-2,memori);
        
    }
    return memori[n];
 }
    int climbStairs(int n) {
      unordered_map<int,int>memori;
      return helper(n,memori);
    }
};
