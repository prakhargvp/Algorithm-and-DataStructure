// https://leetcode.com/problems/length-of-last-word
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string word;
        while (ss >> word) {}
        return word.length();
    }
};