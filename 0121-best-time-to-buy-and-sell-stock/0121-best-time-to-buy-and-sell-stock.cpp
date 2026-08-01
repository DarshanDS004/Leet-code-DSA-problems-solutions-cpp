/*
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit=0;
        int n=prices.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int pro=prices[j]-prices[i];
                max_profit=max(max_profit,pro);
            }
        }
        return max_profit;
        
    }
};
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit=0;
        int n=prices.size();
        int min_so_far=INT_MAX;
        for(int i=0;i<n;i++){
            if(prices[i]<min_so_far){
              min_so_far=prices[i];
            }
            max_profit=max(max_profit,prices[i]-min_so_far);
        }
        return max_profit;
    }
};

