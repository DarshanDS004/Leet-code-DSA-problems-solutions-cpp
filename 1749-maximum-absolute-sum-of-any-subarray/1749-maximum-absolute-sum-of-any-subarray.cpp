class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int max_sum=0;
        int min_sum=0;
        int curr_max=0;
        int curr_min=0;

        for(int i:nums){

            curr_max=max(0,curr_max+i);
            curr_min=min(0,curr_min+i);

            max_sum=max(max_sum,curr_max);
            min_sum=min(min_sum,curr_min);

        }
        return max(max_sum, abs(min_sum));
    }
};