

// Brute Force Working but TLE 
/*
class Solution {
public:
 int forward(int p,int size,vector<int>&nums)
 { 
    int product=1;
    for(int i=p+1;i<size;i++)
    {
        product*=nums[i];
    }
    return product;
 }


int backward(int p,int size,vector<int>&nums)
 { 
    int product=1;
    for(int i=p-1;i>=0;i--)
    {
        product*=nums[i];
    }
    return product;
 }


    vector<int> productExceptSelf(vector<int>& nums) {
       int n=nums.size();
       vector<int>res(n);
       for(int i=0;i<n;i++)
       {
           int p1=forward(i,n,nums);
           int p2=backward(i,n,nums);
           int p=p1*p2;
           res[i]=p;

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
         vector<int>res(n,1);
         int prefix=1;
         for(int i=0;i<n;i++)
         {
                res[i]=prefix;
                prefix*=nums[i];
         }


         int suffix=1;
         for(int i=n-1;i>=0;i--)
         {
            res[i]*=suffix;
            suffix*=nums[i];

         }
         return res;
   }
};
*/


/*
class Solution {
public:
vector<int> productExceptSelf(vector<int>& nums) {
     int n = nums.size();
        vector<int> res(n);

        for (int i = 0; i < n; i++) {
            int product = 1;
            for (int j = 0; j < n; j++) {
                if (i != j) product *= nums[j];
            }
            res[i] = product;
        }

        return res;
    }
};


*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n, 1), suffix(n, 1), res(n);

        // Compute prefix products
        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] * nums[i - 1];
        }

        // Compute suffix products
        for (int i = n - 2; i >= 0; i--) {
            suffix[i] = suffix[i + 1] * nums[i + 1];
        }

        // Multiply prefix[i] * suffix[i]
        for (int i = 0; i < n; i++) {
            res[i] = prefix[i] * suffix[i];
        }

        return res;
    }
};