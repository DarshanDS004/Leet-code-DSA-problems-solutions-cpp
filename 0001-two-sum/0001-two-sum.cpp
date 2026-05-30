/*
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){

            int ele=target-nums[i];
            if(mp.find(ele)!=mp.end()){
                return {mp[ele],i};
            }
            mp[nums[i]]=i;

        }
        return {};
    }
};

*/

/*

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        for(int i=0;i<n;i++){

            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target){
                    return {i,j};
                }
            }
        }
        return {};
    }
};

*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<pair<int,int>>arr;
        for(int i=0;i<n;i++){
            arr.push_back({nums[i],i});

        }

        sort(arr.begin(),arr.end());

        int left=0,right=arr.size()-1;

        while(left<right){

            int sum=arr[left].first+arr[right].first;
            if(sum==target){
            return {arr[left].second,arr[right].second};
            }

            else if(sum<target){
                left++;
            }
            else
            {
                right--;
            }
        }
        return {};
    }
};

        

