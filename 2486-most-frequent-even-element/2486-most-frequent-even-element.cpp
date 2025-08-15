/*
class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int freq=INT_MIN,frq_ele=-1;
      map<int,int>mp;
      for(int i:nums)
      {
        if(i%2==0)
        {
            mp[i]++;
        }
      }
      for(auto [key,value]:mp)
      {
        if(value>freq)
        {
            freq=value;
            frq_ele=key;

        }
        else if(value==freq)
        {
            frq_ele=min(frq_ele,key);
        }
      }
      return frq_ele;

        
    }
};

*/

class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int> mp;
        int maxi = INT_MIN;
        int mini = INT_MAX;

        for(auto x:nums){
            if(x%2 == 0){
                mp[x]++;
                maxi = max(maxi,mp[x]);
            }
        }
        for(auto x:mp){
            if(maxi == x.second){
                mini = min(mini,x.first);
            }
        }
        if(maxi == INT_MIN)
            return -1;
        return mini == INT_MAX ? 0 : mini;
    }
};