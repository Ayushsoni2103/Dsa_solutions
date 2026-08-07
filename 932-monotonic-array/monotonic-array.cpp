class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int i=0;
        int j;
        int inc=0;
        int dec=0;
        for(j=1;j<nums.size();j++){
            if(nums[i]>nums[j]){
                dec++;
            }
            else if(nums[i]<nums[j]){
                inc++;
                
            }
            i=j;
        }
        
        if(inc==0||dec==0){
            return true;
        }
        return false;
        
    }
};