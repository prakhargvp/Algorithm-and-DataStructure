// https://leetcode.com/problems/move-zeroes

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0, j = 0;
        while(j < nums.size()) {
            while(nums[j] == 0 && j < nums.size() - 1) j++;
            swap(nums[i], nums[j]);
            i++, j++;
        }
    }
};