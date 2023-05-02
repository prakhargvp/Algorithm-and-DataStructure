// https://leetcode.com/problems/sign-of-the-product-of-an-array

class Solution {
public:

    int arraySign(vector<int>& nums) {
        int pos = 1, neg = 1, zero = 1;
        for(int num: nums) {
            if(num > 0) pos = 1;
            else if(num < 0 && neg == 1) neg = -1;
            else if(num < 0 && neg == -1) neg = 1;
            else zero = 0;
        }
        return pos * neg * zero;
    }
};