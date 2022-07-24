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
        unordered_map<long long int,int> mp;
        bool find=false;
        auto temp=head;
        while(temp){
            long long int address=reinterpret_cast<long long int>(temp);
        
            if(mp.find(address)==mp.end()){
                mp.insert({address,1});
            }
            else{
                find=true;
                break;
            }
            temp=temp->next;
        }
        return find;
        
    }
};