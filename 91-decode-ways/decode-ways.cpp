//recursion code for a reason 
// class Solution {
// public:
//     int solve(string &s, int i) {

//         if (i == s.size()) {
//             return 1;
//         }

//         if (i > s.size() || s[i] == '0') {
//             return 0;
//         }

//         // Case 1: Take one digit
// //         int case1 = solve(s, i + 1);

// //         // Case 2: Take two digits
// //         int case2 = 0;

// //         if (i + 1 < s.size()) {
// //             int num = (s[i] - '0') * 10 + (s[i + 1] - '0');

// //             if (num >= 10 && num <= 26) {
// //                 case2 = solve(s, i + 2);
// //             }
// //         }

// //         return case1 + case2;
// //     }

// //     int numDecodings(string s) {
// //         return solve(s, 0);
// //     }
// // };
// class Solution {

// public:
// int solve(string &s ,int i,vector<int>&dp){
//     if(i==s.size()){
//         return 1;
//     }
//      if(i>s.size()||s[i]=='0'){
//         return 0;
//     }
//     if(dp[i]!=-1){
//         return dp[i];
//     }
//     int case1=solve(s,i+1,dp);
//     int num=0;
//     if(i+1 < s.size()){
//     num = (s[i] - '0') * 10 + (s[i+1] - '0');
//     }
//     int case2=0;
//     if(10<=num && num<=26){
//      case2=solve(s,i+2,dp);
//     }

//     dp[i]=case1+case2;
//     return dp[i];
// }

//     int numDecodings(string s) {
//         vector<int> dp(s.size()+1,-1);
//         return solve(s,0,dp);
//     }
// };
 class Solution {
 public:
     int numDecodings(string s) {
        int n=s.size();
        vector<int>dp(n+1,0);
        dp[n]=1;
    
        for(int i=n-1;i>=0;i--){
            if(s[i]=='0'){
            dp[i]=0;
            continue;
        }
        dp[i]=dp[i+1];
        if(i+1<n){
            int two_digit=(s[i] - '0') * 10 + (s[i+1] - '0');
            if(two_digit>=10&&two_digit<=26){
                dp[i]+=dp[i+2];
            }
        }
        }
        return dp[0];
     }
 };