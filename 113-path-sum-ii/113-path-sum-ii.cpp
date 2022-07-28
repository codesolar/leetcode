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
    vector<vector<TreeNode*>> res;//result but it contains pointers
    void path(TreeNode* root,vector<TreeNode*> vec,int sum,int target){
        if(root==NULL) return;
        if(root->left==NULL and root->right==NULL){
            if(sum+root->val==target){
                vec.push_back(root);
                res.push_back(vec);
            }
        }
        vec.push_back(root);
        path(root->left,vec,sum+root->val,target);
        path(root->right,vec,sum+root->val,target);
}
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> result;//final result contains integers
        if(root==NULL) return result;
        if(root->left==NULL and root->right==NULL){
            if(root->val==targetSum){
                vector<int> v;
                v.push_back(root->val);
                result.push_back(v);    
            }
            return result;
        }
        vector<TreeNode*> vec;
  
        path(root,vec,0,targetSum);
        
        for(auto itr :res){
            vector<int> in;
            for(int i=0;i<itr.size();i++){
                in.push_back(itr[i]->val);
            }
            result.push_back(in);
        }
        return result;
    }
};