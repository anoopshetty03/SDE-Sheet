// https://www.geeksforgeeks.org/problems/check-whether-k-th-bit-is-set-or-not-1587115620/1 
class Solution {
  public:
    // Function to check if Kth bit is set or not.
    bool checkKthBit(int n, int k) {
        int bitmask = 1 << (k); // 0 index so k otherwise k-1
        int bitvalue = n & bitmask;
        if(bitvalue != 0){
            return true;
        }else{
            return false;
        }
    }
};