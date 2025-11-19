class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
      
      int val=original;
      sort(nums.begin(),nums.end());
       int n=nums.size();
       for(int i=0;i<n;i++)
       {
         if(nums[i]==val)
          {
            val*=2;
          }
       }
       return val;
        
    }
};