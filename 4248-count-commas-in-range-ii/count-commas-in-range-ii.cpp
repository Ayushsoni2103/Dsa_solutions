class Solution {
public:
    long long countCommas(long long n) {

        long long k = 999000; // 1000 to 999999 -> 1 comma each
        long long p = 1998000000LL; // 1000000 to 999999999 -> 2 commas each

        if (n < 1000) {
            return 0;
        }

        if (n < 1000000) {
            return n - 1000 + 1;
        }

        if (n < 1000000000LL) {
            return k + (n - 1000000LL + 1) * 2;
        }

        if (n < 1000000000000LL) {
            return k + p + (n - 1000000000LL + 1) * 3;
        }

        if (n < 1000000000000000LL) {
            return k + p
                 + (1000000000000LL - 1000000000LL) * 3
                 + (n - 1000000000000LL + 1) * 4;
        }

        // n == 10^15
        return k + p
             + (1000000000000LL - 1000000000LL) * 3
             + (1000000000000000LL - 1000000000000LL) * 4
             + 5;
    }
};