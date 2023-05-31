// https://leetcode.com/problems/two-sum

// Approch-1: Brute force
// Time Complexity: O(n2)
// Space Complexity: O(1)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;

        for(int i = 0; i < nums.size(); i++) {
            for(int j = i+1; j < nums.size(); j++) {
                if(nums[i] + nums[j] == target) {
                    res.insert(res.end(), {i, j});
                    break;
                }
            }
        }

        return res;
    }
};