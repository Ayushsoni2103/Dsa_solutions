class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        int b=2;
        
        while(b<=(n-2)){
            string a="";
            int bomb=n;
            while(bomb>0){
            a+=bomb%b+'0';
            bomb=bomb/2;
            }
        reverse(a.begin(),a.end());
            
    int left=0;
        int right=a.length()-1;
        while(left<right){
            if(a[left]!=a[right]){
                return false;
             
            }
               left++;
                right--;
        }
        b++;
          

        }
        return true;
    }
};