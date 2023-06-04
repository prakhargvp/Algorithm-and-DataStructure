// Approach-2: Iterative
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(!root) return nullptr;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()) {
            TreeNode* tmp = q.front();
            swap(tmp->left, tmp->right);
            if(tmp->left) q.push(tmp->left);
            if(tmp->right) q.push(tmp->right);
            q.pop();
        }
        return root;
    }
};