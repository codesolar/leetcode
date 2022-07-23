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
    ListNode* middleNode(ListNode* head) {
       int nodeCount=0,numberOfLinks=0;
        ListNode *temp=head;
        while(temp!=NULL){
            nodeCount++;
            temp=temp->next;
        }
        numberOfLinks=nodeCount/2;
        temp=head;
        while(numberOfLinks!=0){
            temp=temp->next;
            numberOfLinks--;
        }
        return temp;
    }
};