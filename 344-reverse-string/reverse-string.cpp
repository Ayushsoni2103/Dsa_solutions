class Solution {
public:
void reverse(int left,int right,vector<char> & s){
    if(left>=right){
        return;
    }
    swap(s[left],s[right]);
    reverse(left+1,right-1,s);
}
    void reverseString(vector<char>& s) {
        int left=0;
        int right=s.size()-1;
        reverse(left,right,s);
    }
};