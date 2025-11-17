class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int n=nums.size();
        int prev=-1;
        int pre;
        int diff;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            {
                pre=i;
                if(prev!=-1)
                {
                    diff=pre-prev-1;
                    if(diff<k)
                    return false;
                }
                
                prev=i;
            }
           
        }
       return true;
    }
};