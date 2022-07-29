/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
    bool findOnSubTree(TreeNode* root, TreeNode* q) {

        if (root) {
            return findOnSubTree(root->left, q) or (root->val == q->val) or findOnSubTree(root->right, q);
        }

        return false;
    }
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // check if both in the same tree or not?
        // recursively go to that subtree only
        if (findOnSubTree(root->left, p) and findOnSubTree(root->left, q)) {
            return lowestCommonAncestor(root->left, p , q);
        } else if (findOnSubTree(root->right, p) and findOnSubTree(root->right, q)) {
            return lowestCommonAncestor(root->right, p , q);
        }

        // now check if both are in different subtree or not?
        if (findOnSubTree(root->left, p) and findOnSubTree(root->right, q)) {
            return root;
        } else if (findOnSubTree(root->right, p) and findOnSubTree(root->left, q)) {
            return root;
        }

        // base case all must have the ancestor root
        return root;
    }
};
