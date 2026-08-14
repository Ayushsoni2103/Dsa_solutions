class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int> mp;
        int max_len=INT_MIN;
        int right=0;
        int left=0;
        for(int right=0;right<s.length();right++){
            mp[s[right]]++;
            while(mp[s[right]]>2){
                mp[s[left]]--;
                left=left+1;
            }
            max_len=max(max_len,right-left+1);
        }
        return max_len;

        
    }
};