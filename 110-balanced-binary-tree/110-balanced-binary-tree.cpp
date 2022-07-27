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
    unordered_map<TreeNode*,int> mp;
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;
        if(isBalanced(root->left) && isBalanced(root->right) && abs(height(root->left)-               height(root->right))<=1) 
            return true;
        return false;
        
    }
    int height(TreeNode* root){
        if(mp.find(root)!=mp.end()) return mp[root];
        if(root==0){
            mp.insert({root,-1});
            return -1;
        } 
        if(root->left==NULL && root->right==NULL){
            mp.insert({root,0});
            return 0;
        }
        int h=max(height(root->left),height(root->right))+1;
        mp.insert({root,h});
        return h;
        
    }
};