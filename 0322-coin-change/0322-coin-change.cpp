/*
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int result = helper(coins, amount);
        return result == INT_MAX ? -1 : result;
    }

    int helper(vector<int>& coins, int amount) {
        if (amount == 0) return 0;
        if (amount < 0) return INT_MAX;

        int minCoins = INT_MAX;
        for (int coin : coins) {
            int res = helper(coins, amount - coin);
            if (res != INT_MAX) {
                minCoins = min(minCoins, res + 1);
            }
        }
        return minCoins;
    }
};
*/

class Solution {
public:
    unordered_map<int, int> memo;

    int helper(vector<int>& coins, int amount) {
        if (amount == 0) return 0;
        if (amount < 0) return INT_MAX;

        if (memo.count(amount)) return memo[amount];

        int minCoins = INT_MAX;
        for (int coin : coins) {
            int res = helper(coins, amount - coin);
            if (res != INT_MAX) {
                minCoins = min(minCoins, res + 1);
            }
        }
        return memo[amount] = minCoins;
    }

    int coinChange(vector<int>& coins, int amount) {
        int res = helper(coins, amount);
        return res == INT_MAX ? -1 : res;
    }
};
