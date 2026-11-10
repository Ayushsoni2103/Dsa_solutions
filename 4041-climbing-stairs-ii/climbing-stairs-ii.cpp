class Solution {
public:
// recursion code jo ki mujhe samjh thoda kam aya hai yani indexing mein confusion hua hai thoda bahut isko aise samjhna hoga ki humein ek pahle ka sochna hoga 3 step lena hai par 3 step baad ka cost i+2 se hi mil jayega 
int solve(int i,int n,vector<int>&costs){
    int cost1=INT_MAX;int cost2=INT_MAX;int cost3=INT_MAX;
if(i==n){
    return 0;
}
if(i + 1 <= n){
 cost1=costs[i]+1+solve(i+1,n,costs);
}
if(i + 2 <=n){
 cost2=costs[i+1]+4+solve(i+2,n,costs);
}

if(i+3<=n){
 cost3=costs[i+2]+9+solve(i+3,n,costs);
}
//teeno se minimum nikala aur wahi return kr diya 
return min (min(cost1,cost2),cost3);
}
// memoization
// int solve(int i,int n,vector<int>&costs,vector<int>&dp){
//     if(i==n){
//         return 0;
//     }

//         int cost1=INT_MAX;int cost2=INT_MAX;int cost3=INT_MAX;
//         if(dp[i]!=-1){
//             return dp[i];
//         }
//         if(i + 1 <= n){
//  cost1=costs[i]+1+solve(i+1,n,costs,dp);
// }
// if(i + 2 <=n){
//  cost2=costs[i+1]+4+solve(i+2,n,costs,dp);
// }

// if(i+3<=n){
//  cost3=costs[i+2]+9+solve(i+3,n,costs,dp);
// }
// //teeno se minimum nikala aur wahi return kr diya 
// //pahle maine galti ki thi mai dp[i+1] dp[i+2] krke nikal likh rha tha jo ki galat tha i se ant tak pahuchne ka min cost chiye to dp[i] mein min fill hona chiye teeno path mein se i.e teeno cost se 
// dp[i]=min (min(cost1,cost2),cost3);
// return dp[i];


// }

//tabulation 
int tabulationSolve(int n,vector<int>&costs,vector<int>&dp){
int i=0;
dp[0]=0;
dp[1]=dp[0]+costs[0]+1;
for( i=2;i<=n;i++){
    if(i>=3){
 dp[i]=min(min(dp[i-2]+costs[i-1]+4,dp[i-1]+costs[i-1]+1),dp[i-3]+costs[i-1]+9);
    }
    else{
    dp[i]=min(dp[i-2]+costs[i-1]+4,dp[i-1]+costs[i-1]+1);
    }
}
return dp[n];
}
    int climbStairs(int n, vector<int>& costs) {
        vector<int> dp(n+1,-1);
        return tabulationSolve(n,costs,dp);
    }
};