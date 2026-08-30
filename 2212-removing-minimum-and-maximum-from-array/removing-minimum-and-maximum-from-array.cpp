class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
      int mini=INT_MAX;
      int maxi=INT_MIN;
      for(int i=0;i<nums.size();i++){
        mini=min(mini,nums[i]);
        maxi=max(maxi,nums[i]);
      }
      int min_index=0;
      int max_index=0;
      for(int i=0;i<nums.size();i++){
        if(nums[i]==mini){
             min_index=i;
        }
         if(nums[i]==maxi){
             max_index=i;
        }
      }
      int a=max(min_index,max_index)+1;
      int b=min(min_index,max_index)+1+(nums.size()-max(min_index,max_index));
      int c = nums.size() - min(min_index,max_index);
      return min(a,min(b,c));
    }
};