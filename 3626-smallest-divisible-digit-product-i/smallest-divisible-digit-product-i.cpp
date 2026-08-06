class Solution {
public:
    int smallestNumber(int n, int t) {
        while(n>0){
            int num=1;
            int k=n;
          while(k>0){
        int digit=k%10;
        num*=digit;
        
        k=k/10;
          }
          if(num%t==0){
            return n;
        }
        else{
        n++;
        }
        }
          return 0;
        
    }
};