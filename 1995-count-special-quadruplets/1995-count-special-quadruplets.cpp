class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        int ans = 0;

        for(int c = n-2; c >= 2; c--) {

            mp[nums[c+1]]++;

            for(int a = 0; a < c-1; a++) {
                for(int b = a+1; b < c; b++) {
                    int need = nums[a] + nums[b] + nums[c];
                    ans += mp[need];
                }
            }
        }

        return ans;
    }
};