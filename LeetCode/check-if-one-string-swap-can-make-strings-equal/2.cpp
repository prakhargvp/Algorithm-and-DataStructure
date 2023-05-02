// https://leetcode.com/problems/check-if-one-string-swap-can-make-strings-equal

class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int mismatch = 0;
        for(int i=0; i < s1.size(); i++) {
            if(s1[i] != s2[i]) {
                mismatch++;
            }
        }
        if(mismatch < 3) {
            sort(s1.begin(), s1.end());
            sort(s2.begin(), s2.end());
            return s1 == s2;
        }
        return false;
    }
};