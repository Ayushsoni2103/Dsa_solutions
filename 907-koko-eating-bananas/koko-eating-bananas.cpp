class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi=piles[0];
        for(int i=0;i<piles.size();i++){
            maxi=max(maxi,piles[i]);
        }
        int left=1;
        int right=maxi;
        int ans=0;
        while(right>=left){
            int mid=(left+right)/2;
              long long  time=0;
            for(int i=0;i<piles.size();i++){
                time+=ceil((double)piles[i]/mid);
            }
            if(time<=h){
              ans=mid;
                right=mid-1;
            }
            else {
                left=mid+1;
            }

        }
        return ans;
        
        
    }
};