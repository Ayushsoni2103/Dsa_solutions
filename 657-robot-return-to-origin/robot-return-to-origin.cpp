class Solution {
public:
    bool judgeCircle(string moves) {
        int count=0;
        int count2=0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='U'){
                count++;
            }
             if(moves[i]=='D'){
                count--;
            }
             if(moves[i]=='R'){
                count2++;
            }
             if(moves[i]=='L'){
                count2--;
            }
        }
        if(count==0&&count2==0){
            return true;
        }
        return false;

    }
};