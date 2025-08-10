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