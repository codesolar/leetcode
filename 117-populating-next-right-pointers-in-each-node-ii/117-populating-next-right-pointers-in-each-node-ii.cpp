/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
Node* connect(Node* root) {
        if(root==NULL) return root;
        queue<pair<Node*,int>> q;
        q.push({root,0});
        vector<vector<Node*>> vec;
        pair<Node*,int> p;
        while(!q.empty()){
            p=q.front();
            q.pop();
            if(vec.size()-1!=p.second){
                vector<Node*> v;
                v.push_back(p.first);
                vec.push_back(v);
            }
            else{
                vec[vec.size()-1].push_back(p.first);
            }
            if(p.first->left!=NULL){
                q.push({p.first->left,p.second+1});
            }

            if(p.first->right!=NULL){
                q.push({p.first->right,p.second+1});
            } 

        }
        for(auto itr:vec){
            for(int i=0;i<itr.size()-1;i++){
                itr[i]->next=itr[i+1];
            }
        }
        return root;
    }
};