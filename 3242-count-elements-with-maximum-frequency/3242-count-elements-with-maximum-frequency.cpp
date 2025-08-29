class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i:nums)
        {
            mp[i]++;
        }
         
         int max_value=0;
         for(auto&[key,value]:mp)
         {
            max_value=max(value,max_value);
         }
  
         int count=0;
         for(auto &[key,value]:mp)
         {
            if(value==max_value)
            {
                count+=value; 
            }
         }
         return count;
        
    }
};