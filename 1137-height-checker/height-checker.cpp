class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> dupli=heights;
        int count=0;
        sort(dupli.begin(),dupli.end());
        for(int i=0;i<heights.size();i++){
            if(heights[i]!=dupli[i]){
                count++;

            }
        }
        return count;
    }
};