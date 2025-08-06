class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>copy(nums.size());
        int j=0;
        for(int i:nums)
        {
            if(i!=0)
            {
               copy[j]=i;
               j++;
            }
        }
        while(j<nums.size())
        {
            copy[j]=0;
            j++;
        }
        for(int i=0;i<copy.size();i++)
        {
            nums[i]=copy[i];
        }
        
    }
};