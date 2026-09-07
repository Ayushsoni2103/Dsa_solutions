class Solution {
public:
    string sortSentence(string s) {
        vector<string> v;
stringstream ss(s);
string word;
while(ss >> word) {
    v.push_back(word);
}
 for(int i=0;i<v.size();i++){
    char last = v[i].back();
v[i].pop_back();
v[i] = last + v[i];
 }
 sort(v.begin(),v.end());

 string ans="";
 for(int i=0;i<v.size();i++){
    v[i].erase(v[i].begin());

    ans+=v[i];
    if(i<v.size()-1){
ans+=" ";
    }

 }
 return ans;

  
    }
};