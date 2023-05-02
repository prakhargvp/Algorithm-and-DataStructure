// https://leetcode.com/problems/happy-number

class Solution {
public:
    bool isHappy(int n) {

        int tmp = n;
        while(true) {
            long long unsigned sum = 0;
            while(tmp > 0) {
                int digit = tmp % 10;
                sum += pow(digit, 2);
                tmp /= 10; 
            }
            if(sum < 9) {
                if(sum == 1 || sum == 7) return true;
                else return false;
            }
            tmp = sum;
        }
        return false;
    }
};