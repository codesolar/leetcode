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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int index=0;
        return construct(preorder,inorder,index,0,inorder.size()-1);
    }
    TreeNode* construct(vector<int>&preorder,vector<int>&inorder,int &index,int instart,int inend)
    {
        if(instart<=inend){
            int root=preorder[index++];
            for(int i=instart;i<=inend;i++){
                if(inorder[i]==root){
                    root=i;
                    break;
                }
            }
            
            TreeNode* node=new TreeNode(inorder[root]);
            node->left=construct(preorder,inorder,index,instart,root-1);
            node->right=construct(preorder,inorder,index,root+1,inend);
            return node;
        }
        return NULL;
    }
};