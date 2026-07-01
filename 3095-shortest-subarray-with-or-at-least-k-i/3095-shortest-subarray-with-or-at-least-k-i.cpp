class Solution {
public:
    
    int bit_wise(vector<int>& arr) {
    int ans = 0;
    for (int i = 0; i < arr.size(); i++) {
        ans |= arr[i];
    }
    return ans;
}
    int minimumSubarrayLength(vector<int>& nums, int k) {

       int n=nums.size();
       int len=INT_MAX;
       for(int i=0;i<n;i++){
        vector<int>arr;

        for(int j=i;j<n;j++){
            arr.push_back(nums[j]);
         int x=arr.size();
        int res=bit_wise(arr);
       if(res>=k){
        len=min(len,x);
       }
        }

       }
        return len==INT_MAX?-1:len;
    }
};