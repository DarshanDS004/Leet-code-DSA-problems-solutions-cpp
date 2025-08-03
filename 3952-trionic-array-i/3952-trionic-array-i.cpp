
/*
class Solution {
public:

 bool strictly_increasing(vector<int>&nums,int p,int q){
        
            for(int i=p;i<q;i++)
            {
                if(nums[i]>=nums[i+1])
                return false;

            }
        
        return true;
} 



         bool strictly_decreasing(vector<int>&nums,int p,int q){
        
            for(int i=p;i<q;i++)
            {
                if(nums[i]<=nums[i+1])
                return false;

            }
        
        return true;
}

    bool isTrionic(vector<int>& nums) {
        int n=nums.size();
        for(int i=1;i<n-2;i++)
        {
            for(int j=i+1;j<n-1;j++)
            {
                if(  strictly_increasing(nums,0,i)&&
                     strictly_decreasing(nums,i,j)&&
                     strictly_increasing(nums,j,n-1)
                   )
                   return true;

            }
        }
        return false;
       
        
    }
};
*/
class Solution {
public:

bool isStrictlyIncreasing(vector<int>& nums, int start, int end) {
    for (int i = start; i < end; i++)
        if (nums[i] >= nums[i + 1]) return false;
    return true;
}

bool isStrictlyDecreasing(vector<int>& nums, int start, int end) {
    for (int i = start; i < end; i++)
        if (nums[i] <= nums[i + 1]) return false;
    return true;
}

bool isTrionic(vector<int>& nums) {
    int n = nums.size();
    for (int p = 1; p < n - 2; p++) {
        if (!isStrictlyIncreasing(nums, 0, p)) continue;

        int q = p + 1;
        while (q < n - 1 && nums[q] < nums[q - 1]) {
            if (isStrictlyIncreasing(nums, q, n - 1)) return true;
            q++;
        }
    }
    return false;
}
};