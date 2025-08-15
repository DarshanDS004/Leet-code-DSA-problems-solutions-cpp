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