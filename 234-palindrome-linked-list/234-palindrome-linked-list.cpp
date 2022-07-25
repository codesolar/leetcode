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
    bool isPalindrome(ListNode* head) {
        stack<int> s;
        bool flag=true;
        int count=0,top;
        auto temp=head;
        while(temp){
            count++;
            temp=temp->next;
        }
        temp=head;
        for(int i=0;i<count/2;i++){
            s.push(temp->val);
            temp=temp->next;
        }
        
        if(count%2==1) temp=temp->next;
        while(not s.empty()){
            top=s.top();
            s.pop();
            if(top!=temp->val){
                flag=false;
            }
            temp=temp->next;
        }
        return flag;
    }
};