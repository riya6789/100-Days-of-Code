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
    public ListNode middleNode(ListNode head) {
        ListNode p=head;
        while(p!=null && p.next!=null){
            p=p.next.next;
            
            head=head.next;

        }
        return head;        //head returns the whole ll (ll that is left after doing next), i.e. it returns [3,4,5] if original is [1,2,3,4,5]
    }
}
