class Solution {
public:
// mine first approach from the root it gave me the tle 
//     long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
//         long long ans=0;
//         int i=0;
//         int j=0;
//         while(need1>i||need2>j){
//         if(need1==i&&need2!=j){
//             if(cost2<costBoth){
//             ans+=cost2;
//             }
//             else{
//                 ans+=costBoth;
//             }
//             j++;
//     }
//             if(need1!=i&&need2==j){
//                    if(cost1<costBoth){
//             ans+=cost1;
//             }
//             else{
//                 ans+=costBoth;
//             }
//             i++;
//     }
// if (need1 > i && need2 > j) {
//     if (costBoth <= cost1 + cost2) {
//         i++;
//         j++;
//         ans += costBoth;
//     }
//     else {
//         if (cost1 <= cost2) {
//             i++;
//             ans += cost1;
//         }
//         else {
//             j++;
//             ans += cost2;
//         }
//     }
// }
//         }
// return ans;

//     }

// here we go for the second apprach with the help of chatGpt 
   long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
    long long common=min(need1,need2);
        long long part1=min(costBoth,cost1+cost2)*common;
        need1-=common;
        need2-=common;
        long long ans=0;
        if(need1>0){
        ans=1LL*need1*min(costBoth,cost1);      
        }
         if(need2>0){
        ans=1LL*need2*min(costBoth,cost2);      
        }
        return part1+ans;
    }
};