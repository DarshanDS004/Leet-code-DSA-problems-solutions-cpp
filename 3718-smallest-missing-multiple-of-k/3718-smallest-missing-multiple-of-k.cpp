class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set<int>st(nums.begin(),nums.end());
        int mul=k;
        for(int i=0;i<nums.size();i++){
            if(!st.count(mul) && mul%k==0){
                return mul;
            }
            mul+=k;
            

        }
        return mul;
        
    }
};