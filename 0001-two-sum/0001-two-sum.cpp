class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>res;
        for(int i=0;i<nums.size();i++)
        {
            int curr=nums[i];
            int req=target-curr;
            {
            if(res.find(req)!=res.end())
            return{res[req],i};
            }
        res[curr]=i;
        }
        
    
    return {-1,-1};
    }

};