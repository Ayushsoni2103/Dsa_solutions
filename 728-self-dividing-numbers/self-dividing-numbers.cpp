class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        while(left<=right){
            bool valid=true;
            int n=left;
            while(n>0){
                int digit=n%10;
                if(digit==0||left%digit!=0){
                    valid=false;
break;
                }
                n=n/10;

            }
            if(valid){
            ans.push_back(left);
            }
            left++;
        }
        return ans;
    }
};