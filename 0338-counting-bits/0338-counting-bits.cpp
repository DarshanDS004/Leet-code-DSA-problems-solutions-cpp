class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>res(n+1);
        res[0]=0;
        for(int i=1;i<=n;i++){
            int count=0;
            int p=i;
            while(p){
                if(p&1)
                count++;

                p>>=1;

            }
           res[i]=count;
        }
        return res;
        
    }
};