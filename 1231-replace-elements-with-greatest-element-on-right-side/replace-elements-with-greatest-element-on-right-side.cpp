class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> nums;
        int maxi=INT_MIN;
        nums.push_back(-1);
        for(int i=arr.size()-1;i>0;i--){
            maxi=max(maxi,arr[i]);
            nums.push_back(maxi);
        }
        reverse(nums.begin(),nums.end());
        return nums;
    }
};