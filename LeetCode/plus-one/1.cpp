// https://leetcode.com/problems/plus-one

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        for(int i=digits.size() - 1; i >= 0; i--) {
            int total = ( digits[i] + carry );
            digits[i] = total % 10;
            carry = total / 10;
        }
        if(carry) digits.insert(digits.begin(), carry);
        return digits;
    }
};