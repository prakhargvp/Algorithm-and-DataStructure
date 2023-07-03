// Approach-1: Using extra character array
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int ch[26] = {0};
        for(char c: magazine) 
            ch[c - 'a']++;
        for(char c: ransomNote)
            if(ch[c-'a']-- <= 0)
                return false;
        return true;
    }
};