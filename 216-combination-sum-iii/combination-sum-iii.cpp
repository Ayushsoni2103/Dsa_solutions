class Solution {
public:
  void checker(vector<int>& candidates, int n,
                 vector<vector<int>>& ans, vector<int>& temp,
                 int start, int s,int k) {

        if(s == n && temp.size()==k) {
            ans.push_back(temp);
            return;
        }

        if(s > n||temp.size()>k) return;

        for(int i = start; i < candidates.size(); i++) {

            if(i > start && candidates[i] == candidates[i-1])
                continue;

            temp.push_back(candidates[i]);

            checker(candidates,n, ans, temp,
                    i + 1, s + candidates[i],k);

            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>candidates{1,2,3,4,5,6,7,8,9};
             vector<vector<int>> ans;
        vector<int> temp;
        checker(candidates, n, ans, temp, 0, 0,k);
        return ans;
    }
};