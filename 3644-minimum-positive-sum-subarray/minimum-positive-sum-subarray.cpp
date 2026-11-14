class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int  ans  = INT_MAX;
        while(l<=r){
            int m=0;
            int n=l-1;
            while(n<nums.size()){
            int i=m;
            int j=n;
            int mini=0;
            while(i<=j){
                mini+=nums[i];
                i++;
            }
            if(mini>0){
            ans=min(ans,mini);
          
            }
              m++;
            n++;
           
        }
         l++;
        }
        if(ans==INT_MAX){
            return -1;
        }
        return ans;
    }
};