class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
           int left = 0;
    int ones = 0;
    int ans = INT_MAX;
    for (int right = 0; right < s.length(); right++) {
        if (s[right] == '1') {
            ones++;
        }
        while (ones >= k) {
            ans = min(ans, right - left + 1);
            if (s[left] == '1') {
                ones--;
            }
            left++;
        }
    }
    if(ans==INT_MAX){
        return "";
    }
    int l=0;
    int r=ans-1;
    vector<string> check;
    while(r<s.length()){
        string temp="";
        int i=l;
        int count=0;
        while(i<=r){
            temp+=s[i];
            if(s[i]=='1'){
                count++;
            }
             i++;

        }
        if(count==k){
        check.push_back(temp);
        }
        l++;
        r++;
    }
    sort(check.begin(),check.end());
    
    return check[0];
    
   

        
    }
};