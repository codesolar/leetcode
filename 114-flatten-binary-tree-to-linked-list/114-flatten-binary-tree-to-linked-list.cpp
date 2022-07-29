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
    
    void flatten(TreeNode* root) {
        if(root==NULL) return;
        if(root->left==NULL and root->right==NULL) return;
        flattenLeft(root,root);
        flattenRight(root);
        return;
    }
    TreeNode* findlast(TreeNode* root){
        while(root->left){
            root=root->left;
            
        }
        return root;
    }
    void flattenLeft(TreeNode* root,TreeNode* last){
        if(root){
            last=findlast(last);
            flattenLeft(root->left,root->left);
         
            flattenLeft(root->right,root->right);
               last=findlast(last);

            last->left=root->right;
            root->right=NULL;
      
        }
    }
    void flattenRight(TreeNode* root){
        while(root->left){
            root->right=root->left;
            root->left=NULL;
            root=root->right;
        }
        return;
    }
};