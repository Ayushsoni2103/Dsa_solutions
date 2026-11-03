class Solution {
public:
//bottom up approach
/* int solve(int i,int n, vector<int>&dp){
       if(n==i){
            return 1 ;
        }
        if(n<i){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
      dp[i]=solve(i+1,n,dp)+
        solve(i+2,n,dp);
        return dp[i];
}
*/
// top down approach
int solve(vector<int>&dp,int n){
    dp[0]=1;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return solve(dp,n);
    }
    
};