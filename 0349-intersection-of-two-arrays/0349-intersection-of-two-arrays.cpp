class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        set<int>st(nums2.begin(),nums2.end());
        vector<int>res;

        for(int i=0;i<n;i++){
            if(st.count(nums1[i])){
                res.push_back(nums1[i]);
                st.erase(nums1[i]);
            }
        }
        return res;
    }
};