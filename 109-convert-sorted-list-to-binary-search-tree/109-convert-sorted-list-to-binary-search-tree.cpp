/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* sortedListToBST(ListNode* head) {
        vector<ListNode*> vec;
        ListNode* temp=head;
        while(temp){
            vec.push_back(temp);
            temp=temp->next;
        }
        
        int start=0,end=vec.size()-1;
        
        return construct(vec,start,end);
    }
    
    TreeNode* construct(vector<ListNode*> &vec,int start,int end){
        if(start<=end){
            int mid=end+(start-end)/2;
            TreeNode* node=new TreeNode(vec[mid]->val);
            node->left=construct(vec,start,mid-1);
            node->right=construct(vec,mid+1,end);
            return node;
        }
        return NULL;
    }
};