/*
class Solution {
public:

 bool isprime(int n)
 {
    if(n<2)
    return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
 }

    int diagonalPrime(vector<vector<int>>& nums) {
        int n=nums.size();
        int m=nums[0].size();
        int ans=0,max_ans=0;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==j||i + j == n - 1)
                {
                 if(isprime(nums[i][j]))
                 { 
                    ans=nums[i][j];
                    max_ans=max(ans,max_ans);
                 }
                }
            }
        }
        return max_ans;
        
    }
};
*/
class Solution {
public:

 bool isprime(int n)
 {
    if(n<2)
    return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
 }

    int diagonalPrime(vector<vector<int>>& nums) {
        int n=nums.size();
        int m=nums[0].size();
        int ans=0,max_ans=0;

        for(int i=0;i<n;i++)
        {
            if(isprime(nums[i][i]))
            {
                ans=nums[i][i];
                max_ans=max(ans,max_ans);
            }

            if(isprime(nums[i][n-1-i]))
            {
                ans=nums[i][n-i-1];
                max_ans=max(ans,max_ans);

            }
        }
        return max_ans;
    }
};