class Solution {
public:

    bool isNo_zero(int n)
    {
        while(n>0)
        {
            int d=n%10;
            n/=10;
            if(d==0)
            return false;
        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n) {
        vector<int>res;
       for(int i=1;i<=n;i++)
       {
       
       if(isNo_zero(i)&&isNo_zero(n-i))
       {
        res.push_back(i);
        res.push_back(n-i);
        break;
       }
       

       }
       return res;
        
    }
};