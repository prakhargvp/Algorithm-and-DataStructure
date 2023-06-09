// Approach-2: Bottom-up recursion
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    
    int isBalancedTreeHelper(TreeNode* root, int& height) {
        if(!root) {
            height = -1;
            return true;
        }

        int left, right;
        if(isBalancedTreeHelper(root->left, left) && isBalancedTreeHelper(root->right, right) && abs(left - right) < 2) {
            height = max(left, right) + 1;
            return true;
        }

        return false;
    }

    bool isBalanced(TreeNode* root) {
        int height;
        return isBalancedTreeHelper(root, height);
    }
};