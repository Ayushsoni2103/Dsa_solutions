class Solution {
public:
    int solve(int i, vector<int>& prices, int buy,vector<vector<int>>& dp) {

        if (i >= prices.size()) {
            return 0;
        }

         if (dp[i][buy] != -1) {
            return dp[i][buy];
        }



        if (buy == 1) {
            int bought = solve(i + 1, prices, 0,dp) - prices[i];
            int skip = solve(i + 1, prices, 1,dp);
            return dp[i][buy]=max(bought, skip);
        }

        if (buy == 0) {
            int sell = solve(i + 2, prices, 1,dp) + prices[i];
            int hold = solve(i + 1, prices, 0,dp);

            return dp[i][buy]=max(sell, hold);
        }

        return 0;
    }

    int maxProfit(vector<int>& prices) {
        int n = prices.size();

vector<vector<int>>dp(n,vector<int>(2,-1));
        return solve(0, prices, 1,dp);
    }
};