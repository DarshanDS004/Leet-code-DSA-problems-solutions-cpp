/*
class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n=nums.size();
        int left=0;
        int right=0;
        int ans=INT_MAX;
        

        for(int i=l;i<=r;i++){
             int sum=0;
            for(int i=0;i<l;i++){
                sum+=nums[i];
            }

            if(sum>0){
                ans=min(ans,sum);

            }

            for(int i=l;i<n;i++){
                sum+=nums[i];
                sum-=nums[i-l];

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

*/

class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();
        int ans = INT_MAX;

        for (int len = l; len <= r; len++) {
            int sum = 0;

          
            for (int i = 0; i < len; i++)
                sum += nums[i];

            if (sum > 0)
                ans = min(ans, sum);

            for (int i = len; i < n; i++) {
                sum += nums[i];
                sum -= nums[i - len];

                if (sum > 0)
                    ans = min(ans, sum);
            }
        }

        return ans == INT_MAX ? -1 : ans;
    }
};