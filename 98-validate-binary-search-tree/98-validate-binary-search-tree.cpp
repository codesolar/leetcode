/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> v;
    bool isValidBST(TreeNode* root) {
        if(root==NULL) return true;
        return isValid(root,LONG_MIN,LONG_MAX);
    }
    bool isValid(TreeNode* root,long minim,long maxim){
        if(root==NULL) return true;
        if(root->val>minim and root->val<maxim){
            return isValid(root->left,minim,root->val) and isValid(root->right,root->val,maxim);
        }
        return false;
        
    }
    
};