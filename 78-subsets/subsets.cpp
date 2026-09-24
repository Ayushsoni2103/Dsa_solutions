class Solution {
public:
    void printer(vector<int>& nums,int i,vector<int>& temp,vector<vector<int>> &ans){
        if(i==nums.size()){
            ans.push_back(temp);
            return;
        }
        printer(nums,i+1,temp,ans);
            temp.push_back(nums[i]);
        printer(nums,i+1,temp,ans);
        temp.pop_back();
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int i=0;
        vector<int> temp;
        vector<vector<int>> ans;
        printer(nums,i, temp,ans);
return ans;

    }
};