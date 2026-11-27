class Solution {
public:
int solve(int n,vector<int>&dp){
    if(n==0){
        return 0;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    int count=INT_MAX;
    int square=sqrt(n);
    for(int i=square;i>0;i--){
       count=min(count,1+solve(n-i*i,dp));
    }
    dp[n]=count;
    return dp[n];
}
    int numSquares(int n) {
        vector<int>dp(n+1,-1);
return solve(n,dp);
    }
};