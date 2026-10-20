class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int count=0;
        int maxi=nums[n-1];
        int copy=maxi;
        for(int i=n-1;i>=0;i--){
            if(nums[i]<copy){
                copy=nums[i];
                count++;
            }
            if(count==2){
                return copy;
            }
        }
        return maxi;
    }
};