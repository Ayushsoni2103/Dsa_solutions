class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;
        int count=0;
        char ch;
        int p=1;
        for(char c :s){
            mp[c]++;
        }
        int maxi=0;
        for(auto it:mp){
            if(it.second%2!=0){
                maxi=max(maxi,it.second);
            }
        }
        count=count+maxi;
        for(auto it:mp){
            if(it.second==maxi&&p==1){
                p++;
                continue;
            }
            else if((it.second%2)!=0){
               count= count+it.second-1;
            }
            else{
               count= count+it.second;
            }
        }
        return count;  
    }
};