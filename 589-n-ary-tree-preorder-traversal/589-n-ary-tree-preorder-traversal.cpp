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
    vector<int> v;
    vector<int> preorder(Node* root) {
        if(root){
            v.push_back(root->val);
            for(auto itr:root->children){
                preorder(itr);
            }
        }
        return v;
    }
};