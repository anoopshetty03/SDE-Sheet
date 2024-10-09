// https://leetcode.com/problems/longest-common-prefix/ 
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans ="";
        sort(strs.begin(),strs.end());
        int n=strs.size();
        string first=strs[0];
        string last=strs[n-1];
        for(int i=0;i<min(first.size(),last.size());i++){
            if(first[i] != last[i]){
                return ans;
            }
            ans.push_back(first[i]);
        }
        return ans;
    }
};