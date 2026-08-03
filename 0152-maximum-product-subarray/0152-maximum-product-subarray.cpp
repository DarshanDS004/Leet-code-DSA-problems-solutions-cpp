class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int max_so_far=nums[0];
        int min_so_far=nums[0];
        int max_product=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]<0)
            swap(max_so_far,min_so_far);

            max_so_far=max(nums[i],nums[i]*max_so_far);
            min_so_far=min(nums[i],nums[i]*min_so_far);

            max_product=max(max_so_far,max_product);
        }
        return max_product;
    }
};