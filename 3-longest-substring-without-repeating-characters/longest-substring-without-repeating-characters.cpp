class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        int right=0;
        int len=0;
        int maxlen=0;
        unordered_set<int> st;
        for(int right=0;right<s.length();right++){
           while (st.find(s[right])!=st.end()){
                st.erase(s[left]);
                left=left+1;
            }
            
            st.insert(s[right]);
            len=right-left+1;
            maxlen=max(maxlen,len);
            
        }
        return maxlen;
        
    }
};