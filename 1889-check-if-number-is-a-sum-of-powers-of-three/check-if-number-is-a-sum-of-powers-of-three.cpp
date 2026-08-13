class Solution {
public:
    bool checkPowersOfThree(int n) {
        unordered_set<int> st;
        while(n>=1){
          int product=1;
          int count=0;
            while(n>=1){
                product*=3;
                count++;
                if(product>n){
                    product=product/3;
                    count--;
                    n=n-product;
                    
                    if(st.contains(count)){
                      return false;  
                    }
                    st.insert(count);
                    break;
                }
            }
        }
        if(n==0){
            return true;
        }
        return false;
        
    }
};