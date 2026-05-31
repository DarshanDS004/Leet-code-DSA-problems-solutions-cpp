
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int>res(n);
        int left=0,right=n-1;
        int pos=n-1;
        while(left<=right){

          int left_sq=nums[left]*nums[left];
          int right_sq=nums[right]*nums[right];
           if(left_sq>right_sq){
           res[pos]=left_sq;
           left++;
           }
           else{
           res[pos]=right_sq;
           right--;
           }

           pos--;



        }
        return res;
        
    }
};



/*
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
*/