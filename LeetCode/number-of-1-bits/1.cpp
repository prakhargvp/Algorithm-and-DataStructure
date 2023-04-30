// https://leetcode.com/problems/number-of-1-bits

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int total1s = 0;
        while(n > 0) {
            total1s += n & 1;
            n = n >> 1;
        }

        return total1s;
    }
};