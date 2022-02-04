//876. Middle of the Linked List
//https://leetcode.com/problems/middle-of-the-linked-list/

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

//Method-1 (two pinters approach)
class Solution {
    public ListNode middleNode(ListNode head) {
        ListNode p1=head, p2=head;
        
        while(p2!=null && p2.next!=null){
            p1=p1.next;
            p2=p2.next.next;
        }
        
        return p1;
    }
}