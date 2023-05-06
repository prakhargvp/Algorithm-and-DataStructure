// https://leetcode.com/problems/find-the-difference

class Solution {
public:
    char findTheDifference(string s, string t) {
        int ch[26] = {0};

        for(char c : t) ch[c - 'a']++;
        for(char c : s) ch[c - 'a']--;
        
        for(int i=0; i < 26; i++) {
            cout << ch[i] << " ";
            if(ch[i] == 1) return 'a' + i;
        }

        return 'x';
    }
};