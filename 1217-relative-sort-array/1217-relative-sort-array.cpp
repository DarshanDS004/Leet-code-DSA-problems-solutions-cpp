class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int>mp;
        int n=arr1.size();
        vector<int>res(n);
        int j=0;
        for(int i:arr1){
            mp[i]++;
        }
        for(int i=0;i<arr2.size();i++)
        {
            if(mp.find(arr2[i])!=mp.end())
            {
                int val=mp[arr2[i]];
                while(val--)
                {
                    res[j++]=arr2[i];
                }
                mp.erase(arr2[i]);
            }
        }
        for(auto [key,value]:mp)
        {
            while(value--)
            {
              res[j++]=key;
            }
            
        }
        return res;

        
    }
};