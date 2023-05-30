// https://leetcode.com/problems/n-ary-tree-level-order-traversal

class Solution {
public:
    vector<vector<int>> res;
    vector<int> t;
    vector<vector<int>> levelOrder(Node* root) {
        func(root, 0);
        return res;
    }

    void func(Node* root, int level) {
        if(!root) return;
        if(res.size() <= level) { res.push_back(t); }
        for(int i=0; i<root->children.size(); i++) {
            func(root->children[i], level + 1);
        }
        res[level].push_back(root->val);
    }
};