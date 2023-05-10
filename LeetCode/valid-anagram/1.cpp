// https://leetcode.com/problems/valid-anagram

class Solution {
public:
    bool isAnagram(string s, string t) {
        int ch[26] = {0};

        for(char c: s) ch[c - 'a']++;
        for(char c: t) ch[c - 'a']--;

        for(int i=0; i<26; i++) { if(ch[i] != 0) return false; }

        return true;
    }
};