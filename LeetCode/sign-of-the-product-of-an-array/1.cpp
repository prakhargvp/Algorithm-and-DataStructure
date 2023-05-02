// https://leetcode.com/problems/sign-of-the-product-of-an-array

class Solution {
public:
    int arraySign(vector<int>& nums) {
        bool pos = false, neg = false, zero = false;
        for(int num: nums) {
            if(num > 0) pos = true;
            else if(num < 0 && neg == false) neg = true;
            else if(num < 0 && neg == true) neg = false;
            else zero = true;
        }

        if(zero) return 0;
        if(neg) return -1;
        else return 1;
    }
};