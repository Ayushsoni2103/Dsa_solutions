class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int right=0;
        int left=0;
        int ans=0;
       
        for(right=0;right<nums.size();right++){
            mp[nums[right]]++;
            while(mp[nums[right]]>k){
                mp[nums[left]]--;
                left=left+1;
            }
            ans=max(ans,right-left+1);

        }
        return ans;
        
    }
};