// Approach-2: Sorting
// Time Complexity: O(nlogn)
// Space Complexity: O(1)

class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};