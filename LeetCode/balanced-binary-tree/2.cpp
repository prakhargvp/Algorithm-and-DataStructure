
// Approach-2: Bottom-up recursion
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:

    int treeHeight(TreeNode* node) {
        if(!node) return 0;
        int left = treeHeight(node->left);
        int right = treeHeight(node->right);
        if(left == -1 || right == -1 || abs(left - right) > 1) return -1;
        return max(left, right) + 1;
    }

    bool isBalanced(TreeNode* root) {
        int height;
        return treeHeight(root) != -1;
    }
};