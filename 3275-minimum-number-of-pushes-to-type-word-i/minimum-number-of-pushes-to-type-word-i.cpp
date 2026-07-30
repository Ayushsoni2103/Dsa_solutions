class Solution {
public:
    int minimumPushes(string word) {
        int push=0;
    unordered_map<int,int> mp;
    int key=2;  
    
    for(int i=0;i<word.size();i++){
        if(key>9){
            key=2;
        }
        mp[key]++;
        push=push+mp[key];
        key++;

    }


    
    return push; 
    }
};