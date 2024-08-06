// https://leetcode.com/problems/single-number/ 
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xr = 0;
        for(int i:nums){
            xr ^= i;
        }
        return xr;
    }
};