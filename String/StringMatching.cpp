// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/
class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();
        for(int i=0;i<=n-m;i++){
            int j = 0;
            while(j<m){
                if(needle[j] == haystack[i+j]){
                    j++;
                }
                else{
                    break;
                }
                if(j==m){
                    return i;
                }
            }
        }
        return -1;
    }
};