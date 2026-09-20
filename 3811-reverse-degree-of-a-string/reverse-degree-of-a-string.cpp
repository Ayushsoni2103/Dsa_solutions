class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        int p=0;
        for(int i=0;i<s.size();i++){
             p=(i+1)*(96-s[i]+27);
            sum+=p;
           
        }
         return sum;
    }
};