class Solution {
public:
    int solve(vector<vector<int>>& dp, vector<int>& nums, int curr, int prev) {
        if (curr >= nums.size()) {
            return 0;
        }

        if (dp[curr][prev + 1] != -1) {
            return dp[curr][prev + 1];
        }
        int nottake = solve(dp, nums, curr + 1, prev);
        int take = 0;
        if (prev == -1 || nums[curr] > nums[prev]) {
            take = 1 + solve(dp, nums, curr + 1, curr);
        }
        return dp[curr][prev + 1] = max(nottake, take);
    }
    int lengthOfLIS(vector<int>& nums) {
        vector<vector<int>> dp(
            nums.size(),
            vector<int>(nums.size() + 1, -1)
        );
        return solve(dp, nums, 0, -1);
    }
};