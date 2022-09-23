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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==nullptr){
            return ans;
        } 
        
        queue<pair<TreeNode*,int>> q;
        q.push({root,0});
        vector<int> v;
        v.push_back(root->val);
        ans.push_back(v);
        int h=-1;
        while(q.size()!=0){
            pair<TreeNode*,int> p=q.front();
            q.pop();
            if(p.second!=h){
                h=p.second;
                if(h%2==1){
                    reverse(ans[ans.size()-1].begin(),ans[ans.size()-1].end());
                }
            }
            if(p.first->left){
                if(ans.size()==p.second+1){
                    vector<int> vv;
                    vv.push_back(p.first->left->val);
                    ans.push_back(vv);
                }
                else{
                    ans[ans.size()-1].push_back(p.first->left->val);
                    
                }
                q.push({p.first->left,p.second+1});
            }
            
            if(p.first->right){
                 if(ans.size()==p.second+1){
                     vector<int> vv;
                    vv.push_back(p.first->right->val);
                    ans.push_back(vv);
                }
                else{
                    ans[ans.size()-1].push_back(p.first->right->val);
                }
                q.push({p.first->right,p.second+1});
            }
        }
        
        
        return ans;
    }
};