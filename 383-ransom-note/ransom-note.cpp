class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> nums1(26,0);
        vector<int> nums2(26,0);
        for(char ch :ransomNote){
            nums1[ch-'a']++;
        }
        for(char ch:magazine){
            nums2[ch-'a']++;
        }
        for(int i=0;i<26;i++){
            if(nums1[i]>nums2[i]){
                return false;
            }
        }
        return true;
    }
};