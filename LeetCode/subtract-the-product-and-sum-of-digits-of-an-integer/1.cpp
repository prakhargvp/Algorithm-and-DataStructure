// https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer

class Solution {
public:
    int subtractProductAndSum(int n) {
        int pOfDigit = 1;
        int sOfDigit = 0;
        int tmp = n;

        while(tmp > 0) {
            int digit = tmp % 10;
            tmp /= 10;
            pOfDigit *= digit;
            sOfDigit += digit;
        }

        return pOfDigit - sOfDigit;
    }
};