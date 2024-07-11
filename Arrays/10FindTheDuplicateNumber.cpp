// https://leetcode.com/problems/find-the-duplicate-number/
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];

        slow = nums[slow];
        fast = nums[nums[fast]];

        //Detect cycle
        while(slow != fast){
            slow = nums[slow];  //move 1 step
            fast = nums[nums[fast]];  //move 2 step
        }
        
        fast = nums[0];

        while(slow != fast){
            slow = nums[slow];  //move 1 step 
            fast = nums[fast];  //move 1 step
        }
        return slow;
    }
};