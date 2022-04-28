class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
         int n = coins.size();
        vector<int> dp(amount+1, INT_MAX);
        dp[0] = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 1; j <= amount; j++)
            {
                if(j >= coins[i] and dp[j-coins[i]] != INT_MAX)
                    dp[j] = min(dp[j-coins[i]] + 1, dp[j]);
            }
        }
        if(dp[amount] != INT_MAX) return dp[amount];
        return -1;
    }
};