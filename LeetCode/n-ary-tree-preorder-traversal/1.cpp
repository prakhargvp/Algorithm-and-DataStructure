// https://leetcode.com/problems/n-ary-tree-preorder-traversal
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> output;    
        if(!root) return output;
        output.insert(output.begin(), root->val);
        for(int i=0; i < root->children.size(); i++) {
            vector<int> tmp = preorder(root->children[i]);
            output.insert(output.end(), tmp.begin(), tmp.end());
        }
        return output;
    }
};