
/*
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>res;

         for(int i=0;i<n;i++){
            int product=1;
            for(int j=0;j<n;j++){
                if(i!=j)
                product*=nums[j];
            }
            res.push_back(product);
         }
         return res;
        
    }
};

*/

/*
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>prefix(n);
        vector<int>suffix(n);
        prefix[0]=1;

        for(int i=1;i<n;i++){
             prefix[i]=prefix[i-1]*nums[i-1];
        }
         suffix[n-1]=1;

        for(int j=n-2;j>=0;j-- ){
            suffix[j]=suffix[j+1]*nums[j+1];
        }
        
        for(int i=0;i<n;i++){
            nums[i]=prefix[i]*suffix[i];
        }
        return nums;
    }
};

*/

/*
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>prefix(n);
        vector<int>suffix(n);
        prefix[0]=1;

        for(int i=1;i<n;i++){
             prefix[i]=prefix[i-1]*nums[i-1];
        }
         suffix[n-1]=1;

        for(int j=n-2;j>=0;j-- ){
            suffix[j]=suffix[j+1]*nums[j+1];
        }
        
        for(int i=0;i<n;i++){
            nums[i]=prefix[i]*suffix[i];
        }
        return nums;
    }
};
*/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>prefix(n);
        prefix[0]=1;

        for(int i=1;i<n;i++){
             prefix[i]=prefix[i-1]*nums[i-1];
        }
       
         int suffix=1;
         int curr;
        for(int j=n-1;j>=0;j-- ){
            curr=nums[j];
            nums[j]=prefix[j]*suffix;
            suffix*=curr;
        }
        return nums;
    }
};