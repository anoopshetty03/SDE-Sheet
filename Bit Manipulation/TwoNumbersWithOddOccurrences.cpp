// https://www.geeksforgeeks.org/problems/two-numbers-with-odd-occurrences5846/1 
class Solution{
    public:
    vector<long long int> twoOddNum(long long int Arr[], long long int N)  
    {
        set<long long int> s;
        for(int i=0;i<N;i++){
            long long int num = Arr[i];
            if(s.find(num) != s.end()){ // num is already present
                s.erase(num);
            }
            else{
                s.insert(num);
            }
        }

        vector<long long int> ans(s.begin(), s.end());
        
        if (ans.size() == 2) {
            if (ans[0] < ans[1]) {
                swap(ans[0], ans[1]);
            }
        }

        return ans;
    }
};