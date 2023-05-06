// https://leetcode.com/problems/goal-parser-interpretation

class Solution {
public:
    string interpret(string command) {
        string ans = "";

        for(int i=0; i < command.size(); i++) {
            if(command.at(i) == 'G')
                ans += "G";
            else if(command.at(i) == '(' && command.at(i+1) == ')') {
                ans += "o";
                i += 1;
            } else if(command.at(i) == '(' && command.at(i+1) == 'a') {
                ans += "al";
                i += 3;
            }
        }

        return ans;
    }
};
