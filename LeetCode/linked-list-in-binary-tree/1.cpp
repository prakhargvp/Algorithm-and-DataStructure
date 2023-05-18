// https://leetcode.com/problems/linked-list-in-binary-tree
class Solution {
public:
    bool iP(ListNode* head, TreeNode *root) {
        if(head == NULL) return true;
        if(root == NULL) return false;
        if(root->val == head->val)
            return iP(head->next, root->left) || iP(head->next, root->right);
        else return false;
    }
    bool isSubPath(ListNode* head, TreeNode* root) {
        if(head == NULL) return true;
        if(root == NULL) return false;

        if(root->val == head->val) {
            return iP(head->next, root->left) || iP(head->next, root->right) || isSubPath(head, root->left) || isSubPath(head, root->right);
        } else {
            return isSubPath(head, root->left) || isSubPath(head, root->right);
        }
    }
};