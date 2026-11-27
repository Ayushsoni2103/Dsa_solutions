class Solution {
public:
    int solve(int i, vector<int>& prices, int buy, int transactionDone,vector<vector<vector<int>>>& dp) {

        if (i >= prices.size()) {
            return 0;
        }

        // Transaction complete: ab koi action nahi
        if (transactionDone==1) {
            return 0;
        }

         if (dp[i][buy][transactionDone] != -1) {
            return dp[i][buy][transactionDone];
        }



        if (buy == 1) {
            int bought = solve(i + 1, prices, 0, 0,dp) - prices[i];
            int skip = solve(i + 1, prices, 1,0,dp);
            return dp[i][buy][transactionDone]=max(bought, skip);
        }

        if (buy == 0) {
            int sell = solve(i + 2, prices, 1, 0,dp) + prices[i];
            int hold = solve(i + 1, prices, 0,0,dp);

            return dp[i][buy][transactionDone]=max(sell, hold);
        }

        return 0;
    }

    int maxProfit(vector<int>& prices) {
        int n = prices.size();

vector<vector<vector<int>>> dp(
    n, vector<vector<int>>(2, vector<int>(2, -1))
);
        return solve(0, prices, 1,0,dp);
    }
};