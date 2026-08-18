class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int sum=0;
        for(int i:weights){
            sum+=i;
        }
        int maxi=weights[0];
        for(int i:weights){
            maxi=max(maxi,i);
        }
        int right=sum;
        int left=maxi;
         int ans=0;
        while(right>=left){
           int  mid=(left+right)/2; int load=0; int count=1;int j=0;
          while(j<weights.size()){
            load+=weights[j];
            if(load>mid){
                count++;
                load=weights[j];
            }
             j++;
          }
          if(count>days){
             left=mid+1;
          }
          else{
              ans=mid;
            right=mid-1;
          }
        }
        return ans;
    }
};