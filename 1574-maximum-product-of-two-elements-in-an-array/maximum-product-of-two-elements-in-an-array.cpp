class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=nums[nums.size()-1]-1;
        int j=nums[nums.size()-2]-1;
        return i*j;
        
    }
};