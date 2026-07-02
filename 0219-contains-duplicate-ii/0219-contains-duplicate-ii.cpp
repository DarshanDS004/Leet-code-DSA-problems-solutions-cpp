
/*
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++) {
            if (mp.count(nums[i]) && mp[nums[i]] != i &&
                abs(mp[nums[i]] - i) <= k) {
                return true;
            }
            mp[nums[i]] = i;
        }

        return false;
    }
};
*/

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_set<int>st;

        for(int i=0;i<n;i++){
            if(st.count(nums[i])){
                return true;
            }
            st.insert(nums[i]);

            if(st.size()>k)
            st.erase(nums[i-k]);
        }
        return false;
    
    }
};