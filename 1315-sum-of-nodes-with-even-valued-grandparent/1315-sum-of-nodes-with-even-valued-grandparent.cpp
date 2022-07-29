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
    int sum=0;
    int sumEvenGrandparent(TreeNode* root) {
        if(root){
            if(root->val%2==0){
                sumChildren(root->left,1);
                sumChildren(root->right,1);
            }
            sumEvenGrandparent(root->left);
            sumEvenGrandparent(root->right);
        }
        return sum;
    }
    void sumChildren(TreeNode* root,int depth){
        if(root){
            if(depth==0){
                sum+=root->val;
                return;
            }
            sumChildren(root->left,depth-1);
            sumChildren(root->right,depth-1);
        }
    }
};