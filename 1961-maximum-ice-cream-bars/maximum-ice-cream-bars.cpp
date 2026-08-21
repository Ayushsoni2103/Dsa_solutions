class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        long sum=0;
        int i=0;
        int count=0;
        long  sim=0;
        for(int i=0;i<costs.size();i++){
            sim+=costs[i];
        }
        if(sim<=coins){
            return costs.size();
        }
        while(i<costs.size()){
            sum=sum+costs[i];
            if(sum>coins){
              return count;
            }
            count++;
             i++;
           
        }
        return 0;
    }
};