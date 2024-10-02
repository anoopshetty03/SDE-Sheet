// https://leetcode.com/problems/evaluate-reverse-polish-notation/
static unordered_set<string>operators({"+","-","/","*"});
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(auto t: tokens){
            if(operators.find(t) == operators.end()){
                st.push(stoi(t));
            }else{
                int b = st.top();
                st.pop();
                int a = st.top();
                st.pop();
                if(t == "+") st.push(a+b);
                else if(t == "-") st.push(a-b);
                else if(t == "*") st.push(a*b);
                else st.push(a/b);
            }
        }
        return st.top();
    }
};