class Solution {
public:
    string reverseWords(string s) {
        int j = s.length() - 1;
        string temp = "";
        string ans = "";

        while(j >= 0 && s[j] == ' ') {
            j--;
        }

        while(j >= 0) {
            if(s[j] == ' ') {
                reverse(temp.begin(), temp.end());
                if(!temp.empty()) {
                    if(!ans.empty()) {
                        ans += " ";
                    }
                    ans += temp;
                    temp = "";
                }
            }
            else {
                temp += s[j];
            }

            j--;
        }
        reverse(temp.begin(), temp.end());
        if(!temp.empty()) {
            if(!ans.empty()) {
                ans += " ";
            }
            ans += temp;
        }
        return ans;
    }
};