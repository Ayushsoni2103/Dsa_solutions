class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int drink=numBottles;
        int k=0;
        while(numBottles>=numExchange){
             k=numBottles/numExchange;
             int j=numBottles%numExchange;
            drink+=k;
            numBottles=(j)+k;
        }
        return drink;
        
    }
};