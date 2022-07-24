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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL) return NULL;
        if(headB==NULL) return NULL;
        ListNode *temp1=headA,*temp2=headB,*res=NULL;
        //using hash table
        unordered_map<long long int,int> mp;
      
        while(temp1){   
            long long int address=reinterpret_cast<long long int>(temp1);//type cast line //imp
            mp.insert({address,1});
            temp1=temp1->next;
        }
        while(temp2){
            long long int address=reinterpret_cast<long long int>(temp2);//type cast line //imp
            if(mp.find(address)==mp.end()){
                mp.insert({address,1});
            }
            else{
                res=temp2;
                break;
            }
            temp2=temp2->next;
        }
        return res;
    }
};