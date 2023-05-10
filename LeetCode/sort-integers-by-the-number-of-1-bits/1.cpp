// https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits

class Solution {
public:

    static int noOf1bits(int num) {
        int count = 0;
        while(num != 0) {
            count += num & 1;
            num = num >> 1;
        }
        return count;
    }
    static bool comp(int a,int b)
    {
        int counta = 0, countb = 0;
        counta = noOf1bits(a);
        countb = noOf1bits(b);
        return counta == countb ? a < b : counta < countb;
    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), comp);
        return arr;
    }
};