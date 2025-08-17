class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>mp;
        for(int i:nums)
        mp[i]++;
        int max_frq=0;
      
        for(auto [key,value]:mp)
        {
            if(value>=max_frq)
            {
                max_frq=max(value,max_frq);
                

            }
        }
        int count=0;
        for( auto [key,value]:mp)
        {
            if(value==max_frq)
            {
                count+=value;
            }
        }
        return count;
        
    }
};