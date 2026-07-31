class Solution {
public:
    int minimumPushes(string word) {
        if(word.length()>8){
            int push=8;
            int i=8;
            int k=1;
            while(i!=word.length()){
                if(i%8==0){
                    k++;
                }
                
                push+=k;
                i++;

            }
            return push;
            
        }
            return word.length();
        
    }
};