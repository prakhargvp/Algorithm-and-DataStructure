// https://leetcode.com/problems/count-odd-numbers-in-an-interval-range

class Solution {
public:
    int countOdds(int low, int high) {
        // if start is odd number
        if(low % 2 == 0) low++;
        int odd = ((high - low) / 2) + 1;
        return low > high ? 0 : odd;
    }
};
