class Solution {
public:
int find_gcd(int mini,int maxi){
    if(maxi==0){
        return mini;
    }
    return find_gcd(maxi,mini%maxi);
}
    int findGCD(vector<int>& nums) {
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxi){
                maxi=nums[i];
            }
            if(nums[i]<mini){
                mini=nums[i];
            }
        }
       int k= find_gcd(maxi,mini);
       return k;
    }
};