class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n<=0)
        return 0;
       sort(nums.begin(),nums.end());

       int max_count=1;
       int count=1;
       for(int i=1;i<n;i++){
        if(nums[i]==nums[i-1]){
            continue;
        }
        else if(nums[i]==nums[i-1]+1){
            count++;
        }
        else
        {
               count=1;
        }
        
        max_count=max(max_count,count);
       }
       return max_count;
    }
};