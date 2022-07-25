/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        auto slow=head,fast=head;
        while(fast and fast->next){
            fast=fast->next->next;
            slow=slow->next;
            if(slow==fast) break;//it was wrong by me , at first slow is first ,so not //written in the start of the loop
        }
        if(fast and fast->next){
            auto temp=head;
            while(temp!=fast){
                temp=temp->next;
                fast=fast->next;
            }
            return temp;
        }
        return NULL;
    }
};