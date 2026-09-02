class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> mp;
        unordered_map<char,char> mpp;
         if(s.size()!=t.size()){
            return false;
        }

      for(int i=0;i<t.size();i++){
        char c=' ';
            if(mpp.find(t[i])!=mpp.end()){
             c=mpp[t[i]];
              if(c!=s[i]){
                return false;
            }
            }
            mpp[t[i]]=s[i];
           
        }
        
        
       
        for(int i=0;i<s.size();i++){
            char ch=' ';
            if(mp.find(s[i])!=mp.end()){
             ch=mp[s[i]];
             if(ch!=t[i]){
                return false;
            }
            }
            mp[s[i]]=t[i];
            

        }
        return true;
        
    }
};