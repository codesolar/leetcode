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
    ListNode* rotateRight(ListNode* head, int k) {
        auto temp=head,temp1=head,prev_temp=head;
        if(head==NULL) return NULL;
        
        int count =0;
        while(temp){
            count++;
            prev_temp=temp;
            temp=temp->next;
        }
        k=k%count;
        if(k==0) return head;
        int counter=0;
        temp=head;
        while(counter!=count-k-1){
            temp=temp->next;
            counter++;
        }
        temp1=temp->next;
        prev_temp->next=head;
        temp->next=NULL;
        head=temp1;
        return head;
    }
};