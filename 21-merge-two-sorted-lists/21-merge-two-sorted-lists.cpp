
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
      ListNode *prev,*l1,*l2,*temp,*res;
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;
            if(list1->val<=list2->val){
                l1=list1;
                l2=list2;
            }
            else{
                l1=list2;
                l2=list1;
            }
            res=l1;
             while(l1 and l2){
                if(l1->val>l2->val){
                     prev->next=l2;
                    temp=l1;
                    l1=l2;
                    l2=temp;
                 }
                    prev=l1;
                    l1=l1->next;
             }
             if(l1==NULL){
                 prev->next=l2;
             }
              else{
                 prev->next=l1;
             }
        return res;
    }
};