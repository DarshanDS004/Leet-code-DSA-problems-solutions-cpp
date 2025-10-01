class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {

        int n=numBottles;
        int m=numExchange;
        int total=n;
        int empty=n;
       
        while(empty>=m)
        {
            int new_bottels=empty/m;
            total+=new_bottels;
            empty=empty%m+new_bottels;
        }
        return total;
      
       
    }
};