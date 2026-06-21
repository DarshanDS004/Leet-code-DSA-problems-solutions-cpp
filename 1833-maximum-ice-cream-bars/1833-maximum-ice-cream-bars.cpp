/*
class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int count=0;
        for(int i=0;i<costs.size();i++){
            if(coins>=costs[i]){
                coins-=costs[i];
                count++;
            }
            else{
                break;
            }
        }
        return count;
        
    }
};
*/

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int n=costs.size();
        vector<int>freq(1000001,0);

        for(int i:costs){
            freq[i]++;
        }
         
         int count=0;
        for(int i=1;i<=100000;i++){

            int possible=min(freq[i],coins/i);
            count+=possible;
            coins-=possible*i;

            if(coins<i)
            break;

        }
        return count;
    }
};