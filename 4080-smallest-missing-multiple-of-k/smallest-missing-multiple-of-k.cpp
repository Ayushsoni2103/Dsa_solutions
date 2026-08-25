class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int j=0;
        int num;
        for(int i=1;i<=101;i++){
             num=k;
            num*=i;
            for( j=0;j<nums.size();j++){
                if(num==nums[j]){
                    break;
                }
            }
            if(j==nums.size()){
                return num;
            }
        }
        return -1;
        
    }
};