class Solution {
public:
bool istwo(int n){
    if(n==1){
        return true;
    }
    if(n%3!=0){
        return false;
    }
    if(n<=0){
        return false;
    }
    return istwo(n/3);
}
    bool isPowerOfThree(int n) {
        return istwo(n); 
    }
};