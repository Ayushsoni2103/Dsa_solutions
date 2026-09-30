class Solution {
public:
    int numberOfMatches(int n) {
        int sum=0;
        while(n>1){
            if(n%2!=0){
                int matches=(n-1)/2;
                sum+=matches;
                n=(n - 1) / 2 + 1;
            }
            else{
                int matches2=n/2;
                sum+=matches2;
                n=n/2;
            }
        }
        return sum;
    }
};