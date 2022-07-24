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
        ListNode* temp=head;
        int count=0,t=0;
        int num=0;
        while(temp){
            count++;
            temp=temp->next;
        }
        t=count-n;
        if(t==0){
            head=head->next;
        }
        else{
            temp=head;
            while(num!=t-1){
                num++;
                temp=temp->next;
            }
            if(temp->next!=NULL){
                temp->next=temp->next->next;
            }
        }
        return head;
    }
};