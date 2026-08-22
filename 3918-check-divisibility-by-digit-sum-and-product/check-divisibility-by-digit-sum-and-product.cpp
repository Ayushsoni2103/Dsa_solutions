class Solution {
public:
    bool checkDivisibility(int n) {
        int dp=1;
        int ds=0;
        int o=n;
        while(o>0){
            int digit=o%10;
            dp=dp*digit;
            ds=ds+digit;
            o=o/10;
        }
        if(n%(dp+ds)==0){
            return true;
        }
        return false;

        
    }
};