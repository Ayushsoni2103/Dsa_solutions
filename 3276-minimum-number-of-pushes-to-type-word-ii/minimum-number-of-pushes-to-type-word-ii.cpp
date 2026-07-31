class Solution {
public:
    int minimumPushes(string word) {
        int k=0;
        int cost=0;
       unordered_map<char,int> mp;
        for(char c:word){
            mp[c]++;
        }
        vector<int> f;
        for(auto it:mp){
            f.push_back(it.second);
         
        }
           sort(f.begin(),f.end(),greater<int>());
        for(int i=0;i<f.size();i++){
            if(i%8==0){
                k++;
            }
         cost+=k*f[i];

        }
        return cost;
        
           
        
    }
};