/*

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int j=1;
        for(int i=1;i<n;i++){
            nums[0]=nums[0];
            if(nums[i]!=nums[i-1]){
                nums[j++]=nums[i];
            }
        }
        return j;
        
    }
};

*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        set<int> st(nums.begin(), nums.end());

        int i = 0;

        for(auto x : st){
            nums[i++] = x;
        }

        return st.size();
    }
};