class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> mp;
        for(char c:s){
            mp[c]++;
        }
        int k= mp[s[0]];
        for(auto it:mp){
        if(it.second!=k){
            return false;
        }
        }
        return true;
    }
};