// https://leetcode.com/problems/valid-parentheses

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(char ch: s) {
            if(ch == '{' || ch == '[' || ch == '(' ) {
                st.push(ch);
            } else if(st.size() > 0) {
                if ( ch == '}' && st.top() == '{') {
                    st.pop();
                } else if ( ch == ')' && st.top() == '(') {
                    st.pop();
                } else if ( ch == ']' && st.top() == '[') {
                    st.pop();
                } else {
                    return false;
                }
            } else {
                return false;
            }
        }

        return st.empty();
    }
};