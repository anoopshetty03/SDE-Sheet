// https://leetcode.com/problems/sort-colors
// 1st approach
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int count0 = 0, count1 = 0, count2 = 0;
        for(int i=0; i < n; i++){
            if(nums[i] == 0)
                count0++;
            else if(nums[i] == 1)
                count1++;
            else
                count2++;
        }
        for(int i = 0; i < count0; i++)
            nums[i] = 0;
        for(int i = count0; i < count0+count1; i++)
            nums[i] = 1;
        for(int i = count0+count1; i < n; i++)
            nums[i] = 2;

    }
};

//2nd approach
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        
        int low = 0;   
        int mid = 0;   
        int high = n-1; 
        
        while ( mid <= high ) {
            if(nums[mid] == 1) {
                mid++;
            } else if(nums[mid] == 2) {
                swap(nums[mid], nums[high]);
                high--;
            } else { 
                swap(nums[mid], nums[low]);
                low++;
                mid++;
            }
        }
    }
};
