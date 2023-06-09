// https://leetcode.com/problems/balanced-binary-tree

// Approach-1: Top-down recursion
// Time Complexity: O(nlogn)
// Space Complexity: O(n)

class Solution {
public:
    
    int treeHeight(TreeNode* root) {
        if(!root) return 0;
        return 1 + max(treeHeight(root->left), treeHeight(root->right));
    }

    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        int lh = treeHeight(root->left);
        int rh = treeHeight(root->right);
        return abs(lh-rh) <= 1 && isBalanced(root->left) && isBalanced(root->right);
    }
};