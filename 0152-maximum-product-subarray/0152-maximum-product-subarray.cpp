class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int max_pro=INT_MIN;
        for(int i=0;i<n;i++){
            int pro=1;
            for(int j=i;j<n;j++){
                pro*=nums[j];

            
            max_pro=max(max_pro,pro);
            }
        }
        return max_pro;
    }
};