/*
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        vector<int>res;
        for(int i=0;i<m;i++)
        {
            int ele=nums1[i];
           int next_greater=-1;
            for(int j=0;j<n;j++)
            {
                if(nums2[j]==ele)
                {
                    for(int k=j+1;k<n;k++)
                    {
                        if(nums2[k]>ele)
                        {
                            next_greater=nums2[k];
                            break;
                        }
                    }
                    break;
                }
            }
            res.push_back(next_greater);
        }
        return res;
        
    }
};

*/

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp;
        stack<int>st;
        for(int i=nums2.size()-1;i>=0;i--)
        {
            while(!st.empty()&&nums2[i]>=st.top())
            {
                st.pop();
            }
            
            if(st.empty())
            {
                mp[nums2[i]]=-1;
            }
            else
            {
                mp[nums2[i]]=st.top();
            }
            st.push(nums2[i]);
        }
        vector<int>res;
        for(int ele:nums1)
        {
            res.push_back(mp[ele]);
        }
        return res;



  
    }
};


