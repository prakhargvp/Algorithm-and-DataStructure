// https://leetcode.com/problems/maximum-depth-of-binary-tree

// Approch-1: Using Recursion

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }
};