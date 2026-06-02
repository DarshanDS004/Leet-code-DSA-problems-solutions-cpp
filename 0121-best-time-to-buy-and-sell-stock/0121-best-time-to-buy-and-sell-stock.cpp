class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int profit=0,max_profit=0;
        int min_so_far=INT_MAX;
        for(int i=0;i<n;i++){
            if(prices[i]<min_so_far){
                min_so_far=prices[i];
            }
            profit=prices[i]-min_so_far;
            max_profit=max(profit,max_profit);
            
        }
        return max_profit;
        
    }
};