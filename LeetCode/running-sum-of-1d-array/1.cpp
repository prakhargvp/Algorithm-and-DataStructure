// https://leetcode.com/problems/running-sum-of-1d-array

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> res;
        int sum = 0;
        for(int num: nums) {
            sum += num;
            res.insert(res.end(), sum);
        }
        return res;
    }
};