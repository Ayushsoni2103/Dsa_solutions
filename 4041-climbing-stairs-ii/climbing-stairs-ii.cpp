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
int solve(int i,int n,vector<int>&costs,vector<int>&dp){
    if(i==n){
        return 0;
    }

        int cost1=INT_MAX;int cost2=INT_MAX;int cost3=INT_MAX;
        if(dp[i]!=-1){
            return dp[i];
        }
        if(i + 1 <= n){
 cost1=costs[i]+1+solve(i+1,n,costs,dp);
}
if(i + 2 <=n){
 cost2=costs[i+1]+4+solve(i+2,n,costs,dp);
}

if(i+3<=n){
 cost3=costs[i+2]+9+solve(i+3,n,costs,dp);
}
//teeno se minimum nikala aur wahi return kr diya 
dp[i]=min (min(cost1,cost2),cost3);
return dp[i];


}
    int climbStairs(int n, vector<int>& costs) {
        vector<int> dp(n+1,-1);
        return solve(0,n,costs,dp);
    }
};