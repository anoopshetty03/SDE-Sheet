vector < int > nearestSmallerElements(vector < int > & nums) {
    int n = nums.size();
    vector < int > nse(n, -1);
    stack < int > st;
    for (int i = 0; i < n-1; i++) {
        while (!st.empty() && st.top() >= nums[i]) {
          st.pop();
        }
       
        nse[i] = st.empty() ? -1:st.top();
        
        st.push(nums[i]);
    }
    return nse;
}