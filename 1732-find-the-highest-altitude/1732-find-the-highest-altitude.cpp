class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int>res(n+1,0);
         
         res[0]=0;
         int max_gain=0;
        for(int i=1;i<=n;i++){
            res[i]=res[i-1]+gain[i-1];
            if(res[i]>max_gain){
                max_gain=res[i];
            }
            
        }
        return max_gain;
    }
};