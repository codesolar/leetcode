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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<pair<TreeNode*,int>> q;
        vector<vector<int>> v;
        pair<TreeNode*,int> f;
        if(root!=NULL){
             q.push({root,0});
            while(not q.empty()){
                f=q.front();
                q.pop();
                if(v.size()-1!=f.second){
                    vector<int> v1;
                    v1.push_back(f.first->val);
                    v.push_back(v1);
                }
                else{
                    v[v.size()-1].push_back(f.first->val);
                }
                if(f.first->left)
                    q.push({f.first->left,f.second+1});
                if(f.first->right)
                    q.push({f.first->right,f.second+1});
            }
        }
        return v;
    
    }
};