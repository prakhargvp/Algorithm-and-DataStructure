// https://leetcode.com/problems/add-to-array-form-of-integer

class Solution {
public:

    vector<int> sum(vector<int>& num, int x) {
        int carry = x;
        vector<int> res;
        for(int i=0; i < num.size(); i++) {
            int s = num[i] + carry;
            carry = s / 10;
            res.insert(res.begin(), s % 10);
        }
        while(carry > 0) {
            res.insert(res.begin(), carry % 10);
            carry = carry / 10;
        }
        return res;
    }
    
    vector<int> addToArrayForm(vector<int>& num, int k) {
        reverse(num.begin(), num.end());
        return sum(num, k);
    }
};