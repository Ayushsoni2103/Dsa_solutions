class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> temp(nums.size());
        int maxi=INT_MIN;
        int mini=INT_MAX;
         temp[nums.size()-1]=nums[nums.size()-1];
        for(int i=nums.size()-2;i>=0;i--){
            temp[i]=min(nums[i],temp[i+1]);
        }
            for(int i=0;i<nums.size();i++){
              maxi=max(maxi,nums[i]);
              mini=temp[i];
            if((maxi-mini)<=k){
                return i;
            }
        }
        return -1;
    }
};