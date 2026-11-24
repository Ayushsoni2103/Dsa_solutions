class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {
            long long product = 1;
            long long currLcm = 1;
            int currGcd = 0;

            for (int j = i; j < n; j++) {

                if (product > 25200 / nums[j]) {
                    break;
                }

                product *= nums[j];
                currGcd = gcd(currGcd, nums[j]);
                currLcm = lcm(currLcm, (long long)nums[j]);

                if (product == currLcm * currGcd) {
                    ans = max(ans, j - i + 1);
                }
            }
        }

        return ans;
    }
};