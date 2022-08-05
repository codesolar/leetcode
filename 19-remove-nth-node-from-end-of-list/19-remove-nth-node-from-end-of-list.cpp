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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* firstptr,*secondptr,*prev_secondptr;
        firstptr=head;
        secondptr=head;
        int count=1;
        
        if(head->next==NULL){
            return NULL;
        }
        
        while(count<n and firstptr!=NULL and firstptr->next!=NULL){
            firstptr=firstptr->next;
            count++;
        }
        cout<<firstptr->val;
        if(firstptr->next==NULL){
            head=head->next;
            return head;
        }
        while(firstptr->next!=NULL){
            firstptr=firstptr->next;
            prev_secondptr=secondptr;
            secondptr=secondptr->next;
        }
        if(prev_secondptr->next==NULL){
            return NULL;
        }
        prev_secondptr->next=prev_secondptr->next->next;
        return head;
    }
};