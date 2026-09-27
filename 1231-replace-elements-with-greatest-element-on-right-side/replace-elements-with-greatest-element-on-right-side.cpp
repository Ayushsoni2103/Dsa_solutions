class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> nums;
        for(int i = 0; i < arr.size(); i++) {
            int great = INT_MIN;
            for(int j = i + 1; j < arr.size(); j++) {
                great = max(great, arr[j]);
            }
            if(great == INT_MIN)
                nums.push_back(-1);
            else
                nums.push_back(great);
        }

        return nums;
    }
};