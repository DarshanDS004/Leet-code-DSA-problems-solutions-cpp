class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
         if(n==1){
            return {0};
        }
        vector<int>left(n,0),right(n,0);
        vector<int>prefix(n,0);
        prefix[0]=nums[0];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+nums[i];
        }
         int val=prefix[n-1];
         int sum=0;
          for(int i=0;i<n;i++){
            sum+=nums[i];
            right[i]=val-sum;

          }
         for(int i=0;i<n;i++){
            int res=prefix[i]-nums[i];
            left[i]=abs(right[i]-res);

         }
         return left;
    }
};