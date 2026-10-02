class Solution {
public:
const long long MOD = 1000000007;
int finder(int a,long long n){
    if(n==0){
        return 1;
    }
    long long mul=finder(a,n/2);
    long long  result=(mul*mul) % MOD;
    if(n%2!=0){
        result=(a*result)%MOD;
    }
    return result;
}
    int countGoodNumbers(long long n) {
   return (long long)finder(5, ((n+1) / 2)) * finder(4, (n / 2))%MOD;
       
    }
};