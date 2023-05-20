// https://leetcode.com/problems/add-binary

class Solution {
public:
    string sum(string num1, string num2) {
        int carry = 0;
        string res = "";
        for(int i=0; i < num1.size() || i < num2.size(); i++) {
            int s = carry;
            if(i < num1.size()) s += num1[i] - '0';
            if(i < num2.size()) s += num2[i] - '0';
            carry = s / 2;
            res.push_back(to_string(s % 2)[0]);
        }
        if(carry > 0) res.push_back(to_string(carry)[0]);
        return res;
    }

    string addBinary(string a, string b) {
       string res = "";
       reverse(a.begin(), a.end());
       reverse(b.begin(), b.end());
       res = sum(a, b);
       reverse(res.begin(), res.end());
       return res;
    }
};