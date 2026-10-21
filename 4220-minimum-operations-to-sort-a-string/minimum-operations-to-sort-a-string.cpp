class Solution {
public:
    int minOperations(string s) {
        bool sorted=true;
        for(int i=1;i<s.size();i++){
            if(s[i]<s[i-1]){
                sorted=false;
            }
        }
        if(sorted){
            return 0;
        }
        if(s.size()==1){
            return 0;
        }
        if(s.size()==2){
            return -1;
        }
        char mini = s[0];
        char maxi = s[0];
     for (int i = 1; i < s.size(); i++) {
    if (s[i] < mini) {
        mini = s[i];
    }

    if (s[i] > maxi) {
        maxi = s[i];
    }
}
       if(maxi==s[s.size()-1]||mini==s[0]){
        return 1 ;
       }
         for (int i = 1; i < s.size()- 1; i++) {
            if (s[i] == mini || s[i] == maxi) {
                return 2;
            }
        }
       return 3;
    }
};