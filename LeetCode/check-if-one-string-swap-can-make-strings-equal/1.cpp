// https://leetcode.com/problems/check-if-one-string-swap-can-make-strings-equal

class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int firstMismatchIndex = -1, secondMismatchIndex = -1; 
        int mismatch = 0;
        for(int i=0; i < s1.size(); i++) {
            if(s1[i] != s2[i]) {
                mismatch++;
                if(firstMismatchIndex == -1) {
                    firstMismatchIndex = i;
                }else if(secondMismatchIndex == -1) {
                    secondMismatchIndex = i;
                }else {
                    return false;
                }
            }
        }
        if(mismatch) {
           if(mismatch > 1 && s1[firstMismatchIndex] == s2[secondMismatchIndex] && 
           s1[secondMismatchIndex] == s2[firstMismatchIndex]) {
               return true;
           }else {
               return false;
           }
        }
        return true;
    }
};