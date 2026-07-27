class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int max=0;
        int sec_max=0;
        for(int i=0;i<n;i++){
        if(nums[i]>=max){
            sec_max=max;
            max=nums[i];  
        }
        else if(nums[i]>sec_max && nums[i]<max){
            sec_max=nums[i];
           }
      }
        int ans=(max-1)*(sec_max-1);

        return ans;
        
    }
};