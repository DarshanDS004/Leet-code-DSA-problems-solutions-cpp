class Solution {
public:
   int binary_search(vector<int>&arr,int low,int high,int target)
   {
    int mid=(low+high)/2;
    if(low>high)
    return -1;
    if(arr[mid]==target)
    return mid;
    else if(arr[mid]>target)
    return binary_search(arr,low,mid-1,target);
    else
    return  binary_search(arr,mid+1,high,target);

   }


    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0,high=n-1;
        return   binary_search(nums,low,high,target);
        
        
    }
};