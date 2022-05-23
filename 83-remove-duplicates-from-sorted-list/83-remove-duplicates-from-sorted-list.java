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
    public ListNode deleteDuplicates(ListNode head) {
        while(head!=null && head.next!=null && head.val==head.next.val){
            head=head.next;
        }
        if(head!=null && head.next!=null){
            ListNode temp=head.next;
            while(temp!=null && temp.next!=null){
                if(temp.next.val==temp.val){
                    temp.next=temp.next.next;
                }
                if(temp.next!=null && temp.next.val!=temp.val){
                    temp=temp.next;
                }
            }
        }
        return head;
    }
}