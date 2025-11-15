/*

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       
         set<vector<int>> st;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    if(nums[i]+nums[j]+nums[k]==0)
                    {
                        vector<int>temp={nums[i],nums[j],nums[k]};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                        
                    }

                }
            }
        }
         vector<vector<int>>res(st.begin(),st.end());
        return res;
        
    }
};
*/


/*
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       
         set<vector<int>> st;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
                set<int>mp;
            for(int j=i+1;j<n;j++)
            {
              
                int third=-(nums[i]+nums[j]);
                if(mp.find(third)!=mp.end())
                {
                    vector<int>temp={nums[i],nums[j],third};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
              mp.insert(nums[j]);

            }
        }
         vector<vector<int>>res(st.begin(),st.end());
         return res;
    }
};
*/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;

        for (int i = 0; i < n; i++) {


            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            int left = i + 1, right = n - 1;

            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];

                if (sum < 0) left++;
                else if (sum > 0) right--;
                else {
                    res.push_back({nums[i], nums[left], nums[right]});

                    left++;
                    right--;

                    
                    while (left < right && nums[left] == nums[left - 1])
                        left++;

                    while (left < right && nums[right] == nums[right + 1])
                        right--;
                }
            }
        }

        return res;
    }
};
