class Solution {
public:
  
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>res(n);
        int j=0;
         while(j<n){
         int steps=abs(nums[j])%n;
            if(nums[j]>0){
                
                res[j]=nums[(j+steps)%n];
                
                
                    

                }
                else if( nums[j]<0){
                    
                    res[j]=nums[(j-steps+n)%n];
                }
                else{
                    res[j]=nums[j];
                }
                j++;
            }
            return res;
        }
        
    };
