class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0;
        int right=0;
        int sum=0;
        int min_len =INT_MAX;
        int sim=0;
        while(right<nums.size()){
                sum+=nums[right];
            while(sum>=target){
                min_len=min(min_len,right-left+1);
                sum-=nums[left];
                left++;
            }
            right++;     
        }
        for(int i=0;i<nums.size();i++){
            sim+=nums[i];
        }
        if(sim<target){
            return 0;
        }
        return min_len; 
        
    }
};