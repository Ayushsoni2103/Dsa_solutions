class Solution {
public:
int solve(string &s ,int i,vector<int>&dp){
    if(i==s.size()){
        return 1;
    }
     if(i>s.size()||s[i]=='0'){
        return 0;
    }
    if(dp[i]!=-1){
        return dp[i];
    }
    int case1=solve(s,i+1,dp);
    int num=0;
    if(i+1 < s.size()){
    num = (s[i] - '0') * 10 + (s[i+1] - '0');
    }
    int case2=0;
    if(10<=num && num<=26){
     case2=solve(s,i+2,dp);
    }

    dp[i]=case1+case2;
    return dp[i];
}

    int numDecodings(string s) {
        vector<int> dp(s.size()+1,-1);
        return solve(s,0,dp);
    }
};