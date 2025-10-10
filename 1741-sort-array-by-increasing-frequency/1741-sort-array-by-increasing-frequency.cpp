class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        int n=nums.size();
        map<int,int>mp;
        for(int i:nums)
        {
            mp[i]++;
        }
        vector<int>res;
        while(!mp.empty())
        {
            int min_frq=INT_MAX;
            int ele;
            for(auto [key,value]:mp)
            {
                if(value<min_frq)
                {
                    min_frq=value;
                    ele=key;
                }
                else if(min_frq==value)
                {
                    ele=max(key,ele);
                }
            }
            while(min_frq--)
            res.push_back(ele);
            mp.erase(ele);
        }
        return res;
    }
};