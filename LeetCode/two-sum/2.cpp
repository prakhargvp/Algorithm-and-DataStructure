// https://leetcode.com/problems/two-sum

// Approch-1: Two-pass Hash Table
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> umap;
        vector<int> res;

        for(int i = 0; i < nums.size(); i++) umap[nums[i]] = i;
        for(int i = 0; i < nums.size(); i++) {
            int x = umap[target - nums[i]];
            if(x && x != i) {
                res.insert(res.end(), {i, x});
                break;
            }
        }

        return res;
    }
};