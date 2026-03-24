/*
class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        
        int max_sum=0;
        for(int i=0;i<n-k+1;i++){
            int sum=0;
            set<int>st;
            for(int j=i;j<i+k;j++){
             st.insert(nums[j]);
             sum+=nums[j];
                
            }
            if(st.size()==k){
                max_sum=max(max_sum,sum);
            }
        }
        return max_sum;
        
    }
};
*/

class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        
        long long  max_sum=0,sum=0;
        map<int,int>mp;
        int i=0,j=0;
        while(j<n){
           sum+=nums[j];
           mp[nums[j]]++;
           if(j-i+1==k){
            if(mp.size()==k){
             max_sum=max(max_sum,sum);
            }
             mp[nums[i]]--;
             if(mp[nums[i]]==0){
            mp.erase(nums[i]);
             }
            sum-=nums[i];
            i++;
           }
           j++;
        }
        return max_sum;
    }
};