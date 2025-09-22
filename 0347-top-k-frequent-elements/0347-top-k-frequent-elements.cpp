class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mp;
        vector<int>res;
        int ele;
        for(int i:nums)
        {
           mp[i]++;
        }
       
        while(k--)
        {
            int max_frq=0;
            for(auto [key,value]:mp)
            {
                if(value>max_frq)
                {
                    max_frq=value;
                    ele=key;
                }
            }
            res.push_back(ele);
            mp.erase(ele);
        }
        return res;
    }
};