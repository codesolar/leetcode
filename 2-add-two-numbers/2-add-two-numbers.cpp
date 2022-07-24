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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* t1=l1,*t2=l2,*prev1,*prev2;
        // while(t1!=NULL){
        //     count1++;
        //     t1=t1->next;
        // }
        // while(t2!=NULL){
        //     count2++;
        //     t2=t2->next;
        // }
        // if(count1>count2){
        //     ListNode
        // }
        
        while(t1 && t2){
            t1->val=t1->val+t2->val;
            prev1=t1;
            prev2=t2;
            t1=t1->next;
            t2=t2->next;
        }
        //if t1 is null then we just copy valof t2 in t1 by creating nodes
        if(t1==NULL){
            while(t2!=NULL){
                prev1->next=new ListNode(t2->val);
                prev1=prev1->next;
                prev2=t2;//maintain prev2
                t2=t2->next;
            }
        }
        while(prev1->next!=NULL) prev1=prev1->next;
        //if t2 is null then prev is last node of l1
        //else means t1 is not null and t2 is null , but in this case t1 has the values ,so no need to copy
        //now start adding the carry to the next val in right and subtracting 10 if it is more than 10
        t1=l1;
        //c=carry =0
        int c=0;
        while(t1!=NULL){
            if(t1->val>=10 || c==1){
                t1->val=t1->val+c;
                if(t1->val>=10){
                    t1->val=t1->val-10;
                    c=1;
                }
                else
                    c=0;
            }
            t1=t1->next;
        }
        if(c==1){
            prev1->next=new ListNode(1);//as prev1 is the last node of l1
        }
        return l1;
    }
};