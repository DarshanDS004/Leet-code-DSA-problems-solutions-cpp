class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n=nums.size();

        int ans=INT_MAX;
          for(int len=l;len<=r;len++){

            int sum=0;

            for(int i=0;i<len;i++){
                sum+=nums[i];
            }

            if(sum>0){
               ans=min(ans,sum);

            }

            for(int j=len;j<n;j++){
                sum+=nums[j];
                sum-=nums[j-len];

                if(sum>0){
                    ans=min(ans,sum);
                }
            }
          }
          if(ans==INT_MAX)
          return -1;
          else
          return ans;
        
    }
};