class Solution {
public:
    int arrangeCoins(int n) {
        if(n==1){
            return 1;
        }
        int count=0;
        int i=0;
        while(n-i>0){
             i++;
            n-=i;
            count++;
           
        }
        return count;
    }
};