class Solution {
public:
    vector<string> letterCombinations(string digits) {
        unordered_map<char,string> mp; 
        vector<string>v;
            mp['2']="abc";
            mp['3']="def";
            mp['4']="ghi";
            mp['5']="jkl";
            mp['6']="mno";
            mp['7']="pqrs";
            mp['8']="tuv";
            mp['9']="wxyz";
            for(int i=0;i<digits.length();i++){
                v.push_back(mp[digits[i]]);
            }
            vector<string> ans={""};
            for(string s:v){
                vector<string> temp;
                for(char c: s){
                    for( string old :ans){
                    temp.push_back(old+c);
                    }

                }
                ans=temp;
            }
            return ans;
            



           
        

        
    }
};