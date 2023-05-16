// https://leetcode.com/problems/repeated-substring-pattern

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        
        for(int i=1, j=0; i<s.size(); i++) {
            string str = s.substr(0, i);
            for(j=0; j<s.size(); j = j + i) {
                if(str != s.substr(j, i)) break;
            }
            if(j >= s.size()) return true;
        }
        
        return false;
    }
};