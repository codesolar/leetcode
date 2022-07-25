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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n=lists.size();
        if(n==0) return NULL;
        for(int i=0;i<n-1;i++){
             ListNode *prev,*l1,*l2,*temp,*res;
            if(lists[0]==NULL){
                res=lists[1];
            } 
            else if(lists[1]==NULL){
                res=lists[0];

            } 
            else{
                if(lists[0]->val<=lists[1]->val){
                    l1=lists[0];
                    l2=lists[1];
                 }
                else{
                    l1=lists[1];
                    l2=lists[0];
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
            }
           
            lists.erase(lists.begin());
            lists.erase(lists.begin());
            lists.push_back(res);
        }
       return lists[0];
    }
};