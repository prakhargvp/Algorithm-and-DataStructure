// https://leetcode.com/problems/evaluate-reverse-polish-notation

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        string opr = "+-*/";
        int x, y, z;

        for(int i=0; i<tokens.size(); i++) {
            if(opr.find(tokens[i]) != string::npos) {
                y = st.top(); st.pop();
                x = st.top(); st.pop();
                if(tokens[i] == "+" ) st.push(x + y);
                if(tokens[i] == "-" ) st.push(x - y);
                if(tokens[i] == "*" ) st.push(x * y);
                if(tokens[i] == "/" ) st.push(x / y);  
            } else {
                st.push(stoi(tokens[i]));
            }
        }

        return st.top();
    }
};