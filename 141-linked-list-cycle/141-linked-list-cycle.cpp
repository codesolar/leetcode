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
    bool hasCycle(ListNode *head) {
        auto slow=head,fast=head;
        while(fast and fast->next and fast->next!=slow){
            fast=fast->next->next;
            slow=slow->next;
        }
        if(fast and fast->next)
            return true;
        else return false;
    }
};