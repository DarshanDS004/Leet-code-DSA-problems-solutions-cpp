class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
       
        unordered_map<int,int>mp;
        for(int i:nums){
            mp[i]++;
        }

        for(auto [key,val]:mp){
            if(val>n/2){
           return key;
        }
     }
       return -1;   
    }
};