// https://leetcode.com/problems/number-of-1-bits

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int total1s = 0;
        unsigned mask = 1;
        for(int i = 0; i < 32; i++){
            total1s += !!(n & mask);
            mask = mask << 1;
        }
        return total1s;
    }
};