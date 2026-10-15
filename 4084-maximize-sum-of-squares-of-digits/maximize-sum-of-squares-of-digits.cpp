
class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string ans = "";

        if (sum > 9 * num) {
            return ans;
        }

        int count = 0;

        while (count < num) {
            if (sum >= 9) {
                ans += '9';
                sum -= 9;
            } else {
                ans += to_string(sum);
                sum = 0;
            }
            count++;
        }

        if (sum > 0) {
            return "";
        }

        return ans;
    }
};
