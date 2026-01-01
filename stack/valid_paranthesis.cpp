//lc 20
class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(auto it: s){
            if(it=='(' or it=='{' or it=='[')st.push(it);
            else if(it==')' and !st.empty() and st.top()=='(')st.pop();
            else if(it=='}' and !st.empty() and st.top()=='{')st.pop();
            else if(it==']' and !st.empty() and st.top()=='[')st.pop();
            else return false;

        }
        return st.empty();
    }
};
