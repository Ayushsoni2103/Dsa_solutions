class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map <string,string> mp;
         string ans="";
        for(int i=0;i<knowledge.size();i++){
            mp[knowledge[i][0]]=knowledge[i][1];
        }
        int i=0;
         while(i<s.size()){
            string temp="";
            if(s[i]=='('){
                int j=i+1;
                while(s[j]!=')'){
                temp+=s[j];
                j++;
                }
                if(mp.find(temp)!=mp.end()){
                    ans+=mp[temp];
                }
                if(mp.find(temp)==mp.end()){
                    ans+='?';
                }
                i+=temp.size()+2;

            }
            else{
                ans+=s[i];
                i++;
            }
         }
       
        return ans;
    }
};