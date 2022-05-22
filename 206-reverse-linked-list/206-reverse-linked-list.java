/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode reverseList(ListNode head) {
        ListNode h=null,temp1,temp2=null;
        temp1=head;
        while(temp1!=null){
            temp2=new ListNode(temp1.val);
            temp2.next=h;
            h=temp2;
            temp1=temp1.next;
        }
        return h;
    }
}