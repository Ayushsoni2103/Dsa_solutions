class Solution {
public:
    int minChanges(string s) {
       
        int ans=0;
        for(int i=1;i<s.length();i+=2){
             int count1=0;
        int count0=0;
          if(s[i]=='1'){
            count1++;
          }
          if(s[i]=='0'){
            count0++;
          }
          if(s[i-1]=='1'){
            count1++;
          }
          if(s[i-1]=='0'){
            count0++;
          }
          ans+=min(count0,count1);
        }
        return ans;
    }
};