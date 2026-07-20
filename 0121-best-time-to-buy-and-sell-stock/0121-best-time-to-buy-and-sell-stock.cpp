
/*
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int min_so_far=prices[0];
        int max_profit=0;

        for(int i=1;i<n;i++){
            if(prices[i]<min_so_far){
                min_so_far=prices[i]; 
            }
            max_profit=max(max_profit,prices[i]-min_so_far);
        }
        return max_profit;
        
    }
};
*/

/*
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int max_profit=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                max_profit=max(max_profit,prices[j]-prices[i]);
            }
        }
        return max_profit;
    }
};
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int max_profit=0;
        int curr_profit=0;
        for(int i=1;i<n;i++){  
            curr_profit+=prices[i]-prices[i-1];
            curr_profit=max(0,curr_profit);
            max_profit=max(curr_profit,max_profit);
        }
        return  max_profit;
    }
};
