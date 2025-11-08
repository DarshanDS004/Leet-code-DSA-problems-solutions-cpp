/*
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    }
};
*/


/*
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int first=-1, last=-1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==target)
            {
                if(first==-1)
                {
                    first=i;
                }
                last=i;
            }
        }
        return {first,last};
        
    }
};
*/


int first_position(vector<int>&nums,int target)
{
    int n=nums.size();
    int low=0,high=n-1;
    int ans=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(nums[mid]==target)
        {
            ans=mid;
            high=mid-1;

        }

        else if(nums[mid]>target)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
       
    }
     return ans;
}



int last_position(vector<int>&nums,int target)
{
    int n=nums.size();
    int low=0,high=n-1;
    int ans=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(nums[mid]==target)
        {
            ans=mid;
            low=mid+1;

        }

        else if(nums[mid]>target)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
       
    }
     return ans;
}




class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int first=first_position(nums,target);
        int last=last_position(nums,target);
        return {first,last};

    }
};