class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        map<int,int>mp;
        vector<int>res;
        int n=nums.size();
        for(int i:nums){
            mp[i]++;
        }
        for(int i=1;i<=n;i++){
              if(mp.find(i)==mp.end()){
                res.push_back(i);
            }

        }
        return res;
        
    }
};