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
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
       ListNode* h=NULL, *temp1=NULL,*temp2=NULL;
        temp1=head;
        while(temp1!=NULL){
            temp2=new ListNode();
            temp2->val=temp1->val;
            temp2->next=h;
            h=temp2;
            temp1=temp1->next;
        }
        return h;
    }
};