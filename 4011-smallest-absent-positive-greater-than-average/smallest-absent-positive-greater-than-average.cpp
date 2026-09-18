class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        double avg=0;
        int maxi=0;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            avg=(avg+nums[i]);
            maxi=max(maxi,nums[i]);
        }
        avg/=nums.size();
        for(int i:nums){
mp[i]++;
        }
        for(int i=1;i<=maxi;i++){
            if(mp.find(i)==mp.end()&&i>avg){
                return i;
            }
        }
        return maxi+1;
    }
};