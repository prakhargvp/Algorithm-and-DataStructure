// Approach-1: Two pointer approach
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int i = 0, j = n - 1;

        while(i < j) {
            while(i < j && !iswalnum(s[i])) i++;
            while(i < j && !iswalnum(s[j])) j--;
            if(tolower(s[i]) == tolower(s[j])) {
                i++; j--;
            }else{ return false; }
        }
        return true;
    }
};