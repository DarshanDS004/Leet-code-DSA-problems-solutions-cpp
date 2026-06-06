class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
         if(n==1){
            return {0};
        }
        vector<int>res(n);
        vector<int>prefix(n,0);
        prefix[0]=nums[0];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+nums[i];
        }
         int val=prefix[n-1];
         int sum=0;
          for(int i=0;i<n;i++){
            sum+=nums[i];
            int right=val-sum;
            int left=prefix[i]-nums[i];
            res[i]=abs(right-left);

          }
        
         return res;
    }
};