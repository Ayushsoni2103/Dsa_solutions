class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        long long evensum=0;
          for (int i = 0; i < n; i++) {
        nums[i] = abs(nums[i]);
    }
      sort(nums.begin(),nums.end());

for (int i=n - 1; i>= n/2; i--) {
    evensum += 1LL * nums[i] * nums[i];
}
       long long oddsum = 0;
for (int j = (n / 2) - 1; j >= 0; j--) {
    oddsum += 1LL * nums[j] * nums[j];
}
        long long ans=evensum-oddsum;
        return ans;
    }
};