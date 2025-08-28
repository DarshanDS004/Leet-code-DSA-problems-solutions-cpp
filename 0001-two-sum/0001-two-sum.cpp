/*
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(nums[i]+nums[j]==target)
                return{ i,j};
            }
        }
        return  { };
        
    }
};
*/

/*

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>res;
        for(int i=0;i<nums.size();i++)
        {
            res[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++)
        {
            int complement=target-nums[i];
            if(res.find(complement)!=res.end()&&res[complement]!=i)
            return{i,res[complement]};
        }
        return {};
    }
};

*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>res;
        for(int i=0;i<nums.size();i++)
        {
            int complement=target-nums[i];
            if(res.find(complement)!=res.end())
            {
                return { res[complement],i};
            }
            res[nums[i]]=i;
        }
        return { };
    }
};
