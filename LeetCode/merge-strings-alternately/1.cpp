// https://leetcode.com/problems/merge-strings-alternately

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string word = "";
        
        int i = 0, j = 0;

        while(i < word1.size() && j < word2.size()) {
            word.push_back(word1[i++]);
            word.push_back(word2[j++]);
        }

        while(i < word1.size()) {
            word.push_back(word1[i++]);
        }

        while(j < word2.size()) {
            word.push_back(word2[j++]);
        }

        return word;
    }
};