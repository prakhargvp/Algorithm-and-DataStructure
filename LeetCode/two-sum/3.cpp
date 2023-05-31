// https://leetcode.com/problems/two-sum

// Approch-1: One-pass Hash Table
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> umap;
        vector<int> res;

        for(int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if(umap.find(complement) != umap.end()) {
                res.insert(res.end(), {i, umap[complement]});
                break;
            }
            umap[nums[i]] = i;
        }

        return res;
    }
};