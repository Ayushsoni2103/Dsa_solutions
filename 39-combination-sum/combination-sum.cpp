class Solution {
public:
    void checker(vector<int>& candidates, int target,
                 vector<vector<int>>& ans, vector<int>& temp,
                 int start, int s) {

        if(s == target) {
            ans.push_back(temp);
            return;
        }
        if(start>=candidates.size()){
            return;
        }

        if(s > target) return;
        temp.push_back(candidates[start]);
        checker(candidates,target,ans,temp,start,s+candidates[start]);
        temp.pop_back();
          checker(candidates,target,ans,temp,start+1,s);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        sort(candidates.begin(), candidates.end());

        vector<vector<int>> ans;
        vector<int> temp;

        checker(candidates, target, ans, temp, 0, 0);

        return ans;
    }
};