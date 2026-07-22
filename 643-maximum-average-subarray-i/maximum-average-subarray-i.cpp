class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
     int j=0;
     long sum=0;
     for(int i=0;i<k;i++){
      sum=sum+nums[i];
     }
      long maxsum=sum;
     for(int i=k;i<nums.size();i++){
        sum=sum+nums[i]-nums[j];
        j++;
        maxsum=max(maxsum,sum);


     }
     return (double) maxsum/k;
    }
};