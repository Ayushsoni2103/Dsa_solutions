// class Solution {
// public:
// int solve(int n,vector<int>&dp){
//     if(n==0){
//         return 0;
//     }
//     if(dp[n]!=-1){
//         return dp[n];
//     }
//     int count=INT_MAX;
//     int square=sqrt(n);
//     for(int i=square;i>0;i--){
//        count=min(count,1+solve(n-i*i,dp));
//     }
//     dp[n]=count;
//     return dp[n];
// }
//     int numSquares(int n) {
//         vector<int>dp(n+1,-1);
// return solve(n,dp);
//     }
// };

//tabualtion code 

class Solution {
public:
    int numSquares(int n) {
        vector<int>dp(n+1,INT_MAX);
        dp[0]=0;
        for(int i=1;i<=n;i++){
            int square=sqrt(i);
            for(int j=1;j<=square;j++){
                dp[i]=min(dp[i],1+dp[i-j*j]);
            }
        }
        return dp[n];
    }
};