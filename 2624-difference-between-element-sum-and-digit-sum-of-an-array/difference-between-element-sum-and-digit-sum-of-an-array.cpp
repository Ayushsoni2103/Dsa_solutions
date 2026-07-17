class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int num_sum=0;
        int digit_sum=0;
        int j=0;
        for(int i=0;i<nums.size();i++){
            num_sum+=nums[i];
        }
        while(j<nums.size()){
            while(nums[j]>0){
                int digit=nums[j]%10;
                digit_sum+=digit;
                nums[j]/=10;
            }
            j++;

        }
        int diff=abs(num_sum-digit_sum);
        return diff;
        
    }
};