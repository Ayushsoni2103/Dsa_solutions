class Solution {
public:
bool istwo(int n){
    if(n==1){
        return true;
    }
    if(n%2==1){
        return false;
    }
    if(n<=0){
        return false;
    }
    return istwo(n/2);
}
    bool isPowerOfTwo(int n) {
        return istwo(n); 
    }
};