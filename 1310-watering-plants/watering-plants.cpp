class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int capa=capacity;
        int steps=0;
        for(int i=0;i<plants.size();i++){
            if(capa<plants[i]){
                capa=capacity;
                steps=(steps+i+i);
            }
              capa=capa-plants[i];
            steps++;

        }
        return steps;
    }
};