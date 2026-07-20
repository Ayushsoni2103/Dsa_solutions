class Solution {
public:
    int mySqrt(int x) {
      int i=1;
      int k=1;
      while((long long)i*i<=x){
       k=i;
       i++;
    
      }
      if(x==0){
        return 0;
      }
      return k;
        
    }
};