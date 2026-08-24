class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int> prefixGcd;
        int mx=nums[0];
        for(int i=0;i<nums.size();i++){
                mx=max(mx,nums[i]);
            prefixGcd.push_back(gcd(nums[i],mx));
        }
        sort(prefixGcd.begin(),prefixGcd.end());
        int right=prefixGcd.size()-1;
        int left=0;
        long long sum=0;
        while(right>left){
            int k=gcd(prefixGcd[left],prefixGcd[right]);
            sum+=k;
            left++;
            right--;
        }
        return sum;
        
    }
};