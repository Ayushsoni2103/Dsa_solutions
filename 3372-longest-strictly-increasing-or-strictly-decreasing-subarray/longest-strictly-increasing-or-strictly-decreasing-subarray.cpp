class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int j=1;
        int i=0;
        int maxi=1;
        while(j<nums.size()){
         if(nums[j]>nums[j-1]){
           maxi=max(maxi,j-i+1);
           j++;
         }
         else{
          i=j;
          j++;
         }
        }
        i=0;
        j=1;
        int maxi2=1;
        while(j<nums.size()){
                 if(nums[j]<nums[j-1]){
           maxi2=max(maxi2,j-i+1);
           j++;
                 }
                 else{
                    i=j;
                    j++;
                 }
            
        }
        return max(maxi,maxi2);
    }
};