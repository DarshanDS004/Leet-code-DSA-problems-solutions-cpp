class Solution {
public:
    int totalMoney(int n) {
        int w=n/7;
        int d=n%7;
        int total=0;
        int val;
        for(int i=0;i<w;i++)
        {
             val=i+1;
            for(int j=0;j<7;j++)
            {
                total+=val;
                val++;
            }
        }
        val=w+1;
        for(int i=0;i<d;i++)
        {
            total+=val;
            val++;
        }
        return total;
    }
};