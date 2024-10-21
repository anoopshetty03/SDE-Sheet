// https://leetcode.com/problems/top-k-frequent-elements/ 
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freqMap;

        for (int num : nums) {
            freqMap[num]++;
        }

        priority_queue<pair<int, int>> maxHeap;

        for (const auto& entry : freqMap) {
            maxHeap.push({entry.second, entry.first});
        }

        vector<int> ans;
        for(int i=0;i<k;i++) {
            ans.push_back(maxHeap.top().second);
            maxHeap.pop();
        }

        return ans;
    }
};