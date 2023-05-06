// https://leetcode.com/problems/find-the-difference

class Solution {
public:
    char findTheDifference(string s, string t) {
        int ch[26] = {0};

        for(char c : s) ch[c - 'a']++;
        for(char c : t) {
            ch[c - 'a']--;
            if(ch[c - 'a'] == -1) return c;
        }

        return 'x';
    }
};