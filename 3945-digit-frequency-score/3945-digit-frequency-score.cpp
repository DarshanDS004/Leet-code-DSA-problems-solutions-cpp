class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int,int>mp;
        
        
        while(n!=0){
            mp[n%10]++;
            n/=10;
        }
      int sum=0;
        for(auto [key,val]:mp){
            sum+=key*val;


        }
        return sum;
        
    }
};