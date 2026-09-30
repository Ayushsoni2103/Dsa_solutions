class Solution {
public:
 int signFunc(int x){
    if(x<0){
        return -1;
    }
    if(x==0){
        return 0;
    }
    return 1;
 }
    int arraySign(vector<int>& nums) {
        int count=0;
        int centi=0;
        int product=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                centi=1;
               product=0;
                break;
            }
            else if(nums[i]<0){
                count++;
            }
        }
        if(count%2!=0&&centi!=1){
            product=-1;
        }
        return signFunc(product);
    }
};