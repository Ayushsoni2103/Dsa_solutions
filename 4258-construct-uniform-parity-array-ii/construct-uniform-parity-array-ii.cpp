class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int count=0;
        int ct=0;
        int odd_min=INT_MAX;
        int i=0;
         for( i=0;i<nums1.size();i++){
            if(nums1[i]%2!=0&&nums1[i]<odd_min){
                odd_min=nums1[i];
            }
          }
        for( i=0;i<nums1.size();i++){
            if(nums1[i]%2==0){
                count++;
                continue;
            }
          else  if(nums1[i]>odd_min&&(nums1[i]-odd_min)%2==0){
                count++;
            }
        }  
        for( i=0;i<nums1.size();i++){
            if(nums1[i]%2!=0){
                ct++;
                continue;
            }
          else if(nums1[i]>odd_min&&(nums1[i]-odd_min)%2!=0){
                ct++;
        }
        }
        if(count==nums1.size()||ct==nums1.size()){
            return true;
        }
        return false;
    }
};