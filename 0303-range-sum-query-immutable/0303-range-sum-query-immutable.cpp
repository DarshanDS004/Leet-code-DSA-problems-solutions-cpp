class NumArray {
public:
    vector<int>ans;
    NumArray(vector<int>& nums) {
        int n=nums.size();
        ans=nums;
        for(int i=1;i<n;i++){
            ans[i]+=ans[i-1];
        }
        
    }
    
    int sumRange(int left, int right) {
       if(left==0)
       return ans[right];
       else
       {
        return ans[right]-ans[left-1];
       }

        
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */