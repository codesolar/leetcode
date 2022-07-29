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
public:
    unordered_map<TreeNode*,TreeNode*> reverse_graph;
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        inorder(root);
        unordered_map<TreeNode*,int> map;
        TreeNode* key=p;
        while(key!=root){
            if(map.find(key)==map.end()){
                map.insert({key,1});
                key=reverse_graph[key];
            }
        }
        map.insert({root,1});
        key=q;
        while(key!=root){
            if(map.find(key)!=map.end()){
                //no need to insert ,just check if key is present 
                break;
            }
            key=reverse_graph[key];
        }
        //here key can be a number which is already present or key can be root->val
        return key;
    }
    void inorder(TreeNode* root){
        if(root){
            inorder(root->left);
            if(root->left and reverse_graph.find(root->left)==reverse_graph.end()){
                reverse_graph.insert({root->left,root});
            }
            if(root->right and reverse_graph.find(root->right)==reverse_graph.end()){
                reverse_graph.insert({root->right,root});
            }
            inorder(root->right);
        }
        
    }
};