/*
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int>res;
        int left=0,right=n-1;
        while(left<=right){

         int left_sq=nums[left]*nums[left];
         int right_sq=nums[right]*nums[right];

         if(left_sq<right_sq){
            res.psuh_back(left_sq);
            left++;
         }
         else{
            res.psuh_back(right_sq);
         }



        }
        
    }
};
*/



class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int>res;
        for(int i=0;i<n;i++){
            res.push_back(nums[i]*nums[i]);
        }
        sort(res.begin(),res.end());
       return res;
    }
};