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
    int h=0,count=0;
    int countNodes(TreeNode* root) {
        if(root==NULL) return 0;
        TreeNode* temp=root;
        while(temp->left){
            temp=temp->left;
            h++;
        }
        countN(root,h);
        return pow(2,h)-1+count;
    }
    void countN(TreeNode* root,int h){
        if(root){
            cout<<root->val<<endl;
            countN(root->left,h-1);
            if(root->left==NULL and root->right==NULL and h==0) count++;
            countN(root->right,h-1);
        }
        return;
    }
};