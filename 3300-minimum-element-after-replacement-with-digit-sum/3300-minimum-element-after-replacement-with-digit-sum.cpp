class Solution {
public:
  
  int digit_sum(int n){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
    
  }
    int minElement(vector<int>& nums) {
        int n=nums.size();
        int min_digit=INT_MAX;
        for(int i=0;i<n;i++){
            int ans=digit_sum(nums[i]);
            nums[i]=ans;
            min_digit=min(ans, min_digit);

          
        }
        return min_digit;

        
    }
};