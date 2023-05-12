// https://leetcode.com/problems/balanced-binary-tree

class Solution {
public:
    int treeHeight(TreeNode* root) {
        if(!root) return 0;
        int lh = treeHeight(root->left);
        int rh = treeHeight(root->right);
        return 1 + max(lh, rh);
    }
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        int lh = treeHeight(root->left);
        int rh = treeHeight(root->right);
        return abs(lh - rh) <= 1 && isBalanced(root->left) && isBalanced(root->right);
    }
};