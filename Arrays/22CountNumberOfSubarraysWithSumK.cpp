// https://leetcode.com/problems/subarray-sum-equals-k
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        mpp[0] = 1;
        int cnt = 0;
        int prefSum = 0;
        for(int i=0;i<nums.size();i++){
            prefSum += nums[i];
            int remove = prefSum - k;
            cnt += mpp[remove];
            mpp[prefSum] +=1;
        }
        return cnt;
    }
};