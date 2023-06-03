// Approach-2: Compare and reverse
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    bool isPalindrome(string s) {
        string fil_str, rev_str;
        for(auto ch: s) {
            if(isalnum(ch)) fil_str += tolower(ch);
        }

        rev_str.resize(fil_str.size());
        reverse_copy(fil_str.begin(), fil_str.end(), rev_str.begin());

        return fil_str == rev_str;
    }
};