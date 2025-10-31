class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int n=nums.size();
        map<int,int>mp;
        vector<int>res;
        for(int i=0;i<n;i++)
        {
            if(mp.find(nums[i])!=mp.end())
            {
                res.push_back(nums[i]);
            }
            mp[nums[i]]=i;
        }
        return res;
        
    }
};