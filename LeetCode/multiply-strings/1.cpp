// https://leetcode.com/problems/multiply-strings

class Solution {
public:
    string sum(string num1, string num2) {
        int carry = 0;
        string res = "";
        for(int i=0; i < num1.size() || i < num2.size(); i++) {
            int s = carry;
            if(i < num1.size()) s += num1[i] - '0';
            if(i < num2.size()) s += num2[i] - '0';
            carry = s / 10;
            res.push_back(to_string(s % 10)[0]);
        }
        if(carry > 0) res.push_back(to_string(carry)[0]);
        return res;
    }

    string mul(string num, int x) {
        int carry = 0;
        string res = "";
        for(int i=0; i < num.size(); i++) {
            int s = (num[i] - '0') * x + carry;
            carry = s / 10;
            res.push_back(to_string(s % 10)[0]);
        }
        if(carry > 0) res.push_back(to_string(carry)[0]);
        return res;
    }

    string removeZeroes(string num) {
        int i = 0;
        while(num[i] == '0') i++;
        num.erase(0, i);
        if(i > 0 && num.size() == 0) num = "0";
        return num;
    }
    string multiply(string num1, string num2) {
       string res = "";
       reverse(num1.begin(), num1.end());
       reverse(num2.begin(), num2.end());
       for(int i=0; i<num1.size(); i++) {
           string tmp = mul(num2, num1[i] - '0');
           if(i > 0) tmp.insert(tmp.begin(), i, '0');
           res = sum(res, tmp);
       }
       reverse(res.begin(), res.end());
       return removeZeroes(res);
    }
};