class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ele=nums[0];
        vector<int>ans;
        for(int i:nums){
            while(ele<i){
            ans.push_back(ele);
              ele++;
            }
           ele++;
        }
        return ans;

        
    }
};