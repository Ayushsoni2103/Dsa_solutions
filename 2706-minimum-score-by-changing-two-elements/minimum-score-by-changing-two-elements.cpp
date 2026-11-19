class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
      int   n=nums.size();
        //low to hamehsa 0 hi rhega kyuki 2 cheej change kr rhe ho to 
        //max wale ko maintain karne mein 3 case ayenge isko mai nahi soch pa rha tha utube video dekha hun 
        return min({
            nums[n-3]-nums[0],//iska matlab hai ki maine last ke 2 elements equate kr diye 
            nums[n-1]-nums[2],//iska matlab hai ki maine shuruwat ke dono equate kr diye 
            nums[n-2]-nums[1]//iska matlab hai ki maine pahla aur last wala equate kar diya hai
        });
    }};