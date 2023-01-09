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
    public int getDecimalValue(ListNode head) {
        int res=0;
        while(head!=null){          //no need to convert it into binary first, directly convert to decimal starting from 1st node
            res=res*2+head.val;
            head=head.next;
        }
        return res;
    }
}
