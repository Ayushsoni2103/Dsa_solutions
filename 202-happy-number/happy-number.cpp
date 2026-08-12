class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> st;
        
        while(true){
            long long sum=0;
        while(n>0){
            int digit=n%10;
            n=n/10;
            sum+=(digit*digit);

        }
        n=sum;
        if(st.contains(n)){
            return false;
        }
        else{
            st.insert(n);
        }
         if(sum==1){
            return true;
        }
        
        }
        
    }
};