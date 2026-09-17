class Solution {
public:

    string addStrings(string a, string b) {
        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0;

        string ans = "";

        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;

            if (i >= 0)
                sum += a[i--] - '0';

            if (j >= 0)
                sum += b[j--] - '0';

            ans += char((sum % 10) + '0');

            carry = sum / 10;
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }

    string multiply(string num1, string num2) {

        // Zero case
        if (num1 == "0" || num2 == "0")
            return "0";

        string ans = "";

        for (int i = num1.size() - 1; i >= 0; i--) {

            int carry = 0;
            string temp = "";

            for (int j = num2.size() - 1; j >= 0; j--) {

                int p = (num1[i] - '0') * (num2[j] - '0') + carry;

                temp += char((p % 10) + '0');

                carry = p / 10;
            }

            if (carry > 0)
                temp += char(carry + '0');

            reverse(temp.begin(), temp.end());

            int k = num1.size() - 1 - i;

            while (k > 0) {
                temp += '0';
                k--;
            }

            ans = addStrings(ans, temp);
        }

        return ans;
    }
};