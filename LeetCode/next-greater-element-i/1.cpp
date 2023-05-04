// https://leetcode.com/problems/next-greater-element-i

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> umap;
        vector<int> output;
        stack<int> stack;
        
        for(int i = nums2.size() - 1; i >= 0; i--) {
            while(!stack.empty() && stack.top() < nums2[i]) {
                stack.pop();
            }
            umap[nums2[i]] = stack.empty() ? -1 : stack.top();
            stack.push(nums2[i]);
        }

        for(int num: nums1) {
            output.insert(output.end(), umap[num]);
        }

        return output;
    }
};