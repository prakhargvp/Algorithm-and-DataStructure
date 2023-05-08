// https://leetcode.com/problems/decrypt-string-from-alphabet-to-integer-mapping

class Solution {
public:
    string freqAlphabets(string s) {
        string out = "";
        int num;
        for(int i=0; i<s.size(); i++) {
            // check for #
            if(i+2 < s.size() && s.at(i+2) == '#') {
                num = stoi(s.substr(i, 2));
                i += 2;
            } else {
                num = stoi(s.substr(i, 1));
            }
            char ch = 'a' + num - 1;
            out.push_back(ch);
        }
        return out;
    }
};