// 2. Add Two Numbers
// https://leetcode.com/problems/stream-of-characters/

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
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode dummy = new ListNode();
        ListNode res=dummy;

        int sum=0, carry=0;

        while(l1!=null || l2!=null || carry!=0){
            sum=carry;

            if(l1!=null){
                sum+=l1.val;
                l1=l1.next;
            }

            if(l2!=null){
                sum+=l2.val;
                l2=l2.next;
            }

            int num=sum%10;
            carry= sum/10;

            dummy.next = new ListNode(num);
            dummy= dummy.next;
        }

        return res.next;
    }
}