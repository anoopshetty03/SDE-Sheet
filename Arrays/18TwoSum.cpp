// https://leetcode.com/problems/two-sum/ 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;
        vector<int>ans;

        for(int i=0; i < nums.size(); i++){
            int needed = target - nums[i];
            if(mpp.find(needed) != mpp.end()){
                return {i,mpp[needed]};
            }
            mpp[nums[i]] = i;
        }
        return {-1,-1};
    }
};