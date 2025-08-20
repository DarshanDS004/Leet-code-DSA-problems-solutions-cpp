/*
class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size();
        vector<int>res;
        for(int i=0;i<n;i++)
        {
            if(nums[i]%2==0)
            {
                res.push_back(nums[i]);
                
            }
        }
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]%2!=0)
            {
                res.push_back(nums[i]);
                
            }
        }
        int j=0,k=n/2;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
             nums[i]=res[j];
             j++;
            }
            else
            {
                nums[i]=nums[k];
                k++;
            }
        }
        return nums;
    }
        
    
};
*/

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        vector<int> res;

        for (int i = 0; i < n; i++) {
            if (nums[i] % 2 == 0) {
                res.push_back(nums[i]);
            }
        }

        for (int i = 0; i < n; i++) {
            if (nums[i] % 2 != 0) {
                res.push_back(nums[i]);
            }
        }

        int j = 0;
        int k = n / 2;

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                nums[i] = res[j++];
            } else {
                nums[i] = res[k++];
            }
        }

        return nums;
    }
};
