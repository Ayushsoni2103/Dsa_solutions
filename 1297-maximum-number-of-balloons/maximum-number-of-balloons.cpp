class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> mp;
        vector<int> freq;
        for(char ch:text){
            if(ch=='b'||ch=='a'||ch=='l'||ch=='o'||ch=='n'){
                  mp[ch]++;
            } 
        }
       int x = min(mp['a'], min(mp['b'], mp['n']));
       int y = min(mp['l']/2, mp['o']/2);
       return min(x,y);
        return 0;
        
    }
};