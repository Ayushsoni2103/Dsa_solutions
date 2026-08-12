class Solution {
public:
    double myPow(double x, int n) {
        long long N=n;
        return fun(x,N);
        
    }
    double fun(double x,long long n){
        if(n==0){
            return 1;

        }
        if(n<0){
            return 1/fun(x,-n);

        }
        double k=fun(x,n/2);
        if(n%2!=0){
            return x*k*k;
        }
        else{
            return k*k;
        }
    }
};