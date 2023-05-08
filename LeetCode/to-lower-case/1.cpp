// https://leetcode.com/problems/to-lower-case

class Solution {
public:
    string toLowerCase(string s) {
        string out = "";
        for(char ch: s) {
            out += tolower(ch);
        }
        return out;
    }
};