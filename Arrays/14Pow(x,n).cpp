// https://leetcode.com/problems/powx-n/
// https://leetcode.com/problems/powx-n/solutions/1337794/java-c-simple-o-log-n-easy-faster-than-100-explained/ 
class Solution {
public:
    double myPow(double x, int n) {
        if(n < 0) {
            x = 1 / x;
        } 
        
        long num = labs(n);
        
        double pow = 1;
        
        while(num){ 
            if(num % 2 == 1) { // odd number
                pow *= x;
            }
            
            x *= x;
            num >>= 1; // equivalent to while(num = num / 2)
        }
        
        return pow;
    }
};