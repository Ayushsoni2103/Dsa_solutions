class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
       sort(arr.begin(),arr.end());
       if(arr.size()==2){
        return true;
       }
       int j=1;
       int k=arr[0]-arr[1];
       for(int i=0;i<arr.size()-1;i++){
       if(arr[i]-arr[j]!=k){
        return false;
       }
       j++;
       }
       return true;

    }
};