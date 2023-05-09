// https://leetcode.com/problems/sum-of-left-leaves

class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root) return 0;
        int sum = 0;
        if(root->left && root->left->left == nullptr && root->left->right == nullptr) {
            sum += root->left->val;
        }
        return sum + sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right);
    }
};