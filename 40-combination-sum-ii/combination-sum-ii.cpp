class Solution {
public:
    void checker(vector<int>& candidates, int target,
                 vector<vector<int>>& ans, vector<int>& temp,
                 int start, int s) {

        if(s == target) {
            ans.push_back(temp);
            return;
        }

        if(s > target) return;

        for(int i = start; i < candidates.size(); i++) {

            if(i > start && candidates[i] == candidates[i-1])
                continue;

            temp.push_back(candidates[i]);

            checker(candidates, target, ans, temp,
                    i + 1, s + candidates[i]);

            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

        sort(candidates.begin(), candidates.end());

        vector<vector<int>> ans;
        vector<int> temp;

        checker(candidates, target, ans, temp, 0, 0);

        return ans;
    }
};