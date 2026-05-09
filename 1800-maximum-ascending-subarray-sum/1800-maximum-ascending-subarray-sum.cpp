class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n=nums.size();
        int max_sum=INT_MIN;
        int prev=nums[0];
        int sum=nums[0];
         if(n==1)
         return sum;
        for(int i=1;i<n;i++){

            if(nums[i]>prev){
                sum+=nums[i];
                prev=nums[i];
            }
            else{
                max_sum=max(sum, max_sum);
                sum=nums[i];
                prev=nums[i];
            }
            max_sum=max(sum,max_sum);
        }
        return max_sum;
        
    }
};