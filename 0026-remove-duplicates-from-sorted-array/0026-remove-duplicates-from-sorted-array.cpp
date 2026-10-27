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
        int j=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[j]){
                nums[++j]=nums[i];
            }
        }
        return j+1;
    }
};