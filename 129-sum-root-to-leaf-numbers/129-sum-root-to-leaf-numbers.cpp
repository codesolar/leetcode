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
    int sumNumbers(TreeNode* root) {
        int sum=0;
        int finalsum=0;
        return sumNode(root,sum,finalsum);
    }
    
    int sumNode(TreeNode* root,int sum,int finalsum){
        if(root==NULL){
            return 0;
        }
        if(root->left==NULL and root->right==NULL){
            sum=sum*10+root->val;
            finalsum+=sum;
            return finalsum;
        }
        
        sum=sum*10+root->val;
        return sumNode(root->left,sum,finalsum)+sumNode(root->right,sum,finalsum);
    }
};