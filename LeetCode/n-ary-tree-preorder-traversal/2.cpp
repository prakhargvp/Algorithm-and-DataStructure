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
        stack<Node*> stack; 
        if(!root) return output;

        stack.push(root);
        while (!stack.empty()) {
            Node* nd = stack.top();
            stack.pop();
            output.insert(output.end(), nd->val);
            for(int i=nd->children.size() - 1; i >= 0; i--) {
                stack.push(nd->children[i]);
            }
        }
        return output;
    }
};