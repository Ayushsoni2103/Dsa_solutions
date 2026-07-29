class Solution {
public:
    bool isPalindrome(string s) {
    int left=0;
        int right=s.length()-1;
        while(left<right){
            char leftChar = tolower(s[left]);
            char rightChar = tolower(s[right]);
            if(!isalnum(rightChar)){
                right--;
                continue;
            }
              if(!isalnum(leftChar)){
                left++;
                continue;
            }
            if(rightChar!=leftChar){
                return false;
             
            }
               left++;
                right--;
        }
        return true;
        
    }
};