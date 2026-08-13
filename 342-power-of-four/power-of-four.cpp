class Solution {
public:
bool istwo(int n){
    if(n==1){
        return true;
    }
    if(n%4!=0){
        return false;
    }
    if(n<=0){
        return false;
    }
    return istwo(n/4);
}
    bool isPowerOfFour(int n) {
        return istwo(n); 
    }
};