class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int n=nums.size();
        int degree=0;
        unordered_map<int,int>freq,first,last;

        for(int i=0;i<n;i++){
         if(freq.find(nums[i])==freq.end()){
                first[nums[i]]=i;
            }

            freq[nums[i]]++;
            last[nums[i]]=i;
            degree=max(degree,freq[nums[i]]);
        }

        int min_len=n;
        for(auto [key,val]:freq){
            if(val==degree){
                int len=last[key]-first[key]+1;
                 min_len=min(min_len,len);
            }
        }
        return min_len;
    


        
    }
};