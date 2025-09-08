/*
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int max_len=0;
        for(int i=0;i<n;i++)
        {  
             int zero_count=0;
             for(int j=i;j<n;j++)
             {
                if(nums[j]==0)
                {
                    zero_count++;
                }
                if(zero_count<=k)
                {
                    max_len=max(max_len,j-i+1);
                }
                else
                {
                    break;
                }


             }
        }
        return max_len;
        
        
    }
};
*/

/*
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int max_len=0;
        for(int i=0;i<n;i++)
        {  
             int zero_count=0;
             for(int j=i;j<n;j++)
             {
                if(nums[j]==0)
                {
                    zero_count++;
                }
                if(zero_count>k)
                {
                  break;
                }
                 max_len=max(max_len,j-i+1);
                


             }
        }
        return max_len;
        
        
    }
};
*/


class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int max_len=0;
        int left=0;
        int zero_count=0;
        for(int right=0;right<n;right++)
        {
               if(nums[right]==0){
               zero_count++;
               }

               while(zero_count>k)
               { 
                if(nums[left]==0)
                {
                  zero_count--;
                }
                left++;

               }
               max_len=max(max_len,right-left+1);


        }
        return max_len;
    }
};
