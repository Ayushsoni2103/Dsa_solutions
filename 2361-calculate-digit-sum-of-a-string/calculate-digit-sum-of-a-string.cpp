class Solution {
public:
    string digitSum(string s, int k) {
        string ans;
        while(s.length()>k){
            ans="";

        for(int j=0;j<s.length();j+=k){
            int sum=0;
        for(int i=j;i<min(j+k, (int)s.length());i++){
           sum += s[i] - '0';
        }
        ans+=to_string(sum);
        }
        s=ans;
        }
        return s;
    }
};