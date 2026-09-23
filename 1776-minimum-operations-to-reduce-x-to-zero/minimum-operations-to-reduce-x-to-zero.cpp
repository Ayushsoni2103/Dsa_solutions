class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int sum=0;
         unordered_map<int,int> mp;
         int max_len=INT_MIN;
         mp[0]=-1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int target=sum-x;
        if(target==0){
            return nums.size();
        }
        int prefix_sum=0;
        for(int i=0;i<nums.size();i++){
            prefix_sum+=nums[i];
             if(mp.find(prefix_sum-target)!=mp.end()){
              int l=i-mp[prefix_sum-target];
            max_len=max(l,max_len);

            }
               if(mp.find(prefix_sum) == mp.end()) {
                mp[prefix_sum] = i;
            }
           
    
        }
            if(max_len == INT_MIN)
            return -1;
        return nums.size()-max_len;

       
    }
};