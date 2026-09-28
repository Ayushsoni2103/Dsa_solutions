class Solution {
public:
    int maxDepth(string s) {
    int centi = 0;
    int maxi = 0;

    for(char c : s) {
        if(c == '(') {
            centi++;
            maxi = max(maxi, centi);
        }
        else if(c == ')') {
            centi--;
        }
    }

    return maxi;

    }
};