class Solution {
public:
 void paranpaglu(int n,int left,int right,vector<string> &ans,string &temp){
    if(left==n&&right==n){
        ans.push_back(temp);
        return;
    }
    if(left<n){
      temp.push_back('(');
    paranpaglu(n,left+1,right,ans,temp);
    temp.pop_back();
    }
    if(left>right){
    temp.push_back(')');
        paranpaglu(n,left,right+1,ans,temp);
          temp.pop_back();
    }
    }
  

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string temp;
        int left=0;
        int right=0;
         paranpaglu(n,left,right,ans,temp);
         return ans;

    }
};