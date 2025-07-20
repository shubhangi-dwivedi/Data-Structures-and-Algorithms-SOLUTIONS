// 445. Add Two Numbers II
// https://leetcode.com/problems/add-two-numbers-ii/description/

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

// Method -1 using stack
class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        Stack<Integer> s1 = new Stack<>();
        Stack<Integer> s2 = new Stack<>();

        // Push all nodes of l1 into s1
        while (l1 != null) {
            s1.push(l1.val);
            l1 = l1.next;
        }

        // Push all nodes of l2 into s2
        while (l2 != null) {
            s2.push(l2.val);
            l2 = l2.next;
        }

        ListNode dummy = null;
        int sum = 0, carry = 0;

        // Add digits from stacks
        while (!s1.isEmpty() || !s2.isEmpty() || carry != 0) {
            sum = carry;

            if (!s1.isEmpty()) {
                sum += s1.pop();
            }

            if (!s2.isEmpty()) {
                sum += s2.pop();
            }

            int digit = sum % 10;
            carry = sum / 10;

            // Insert new node at the head of the result list
            ListNode newNode = new ListNode(digit);
            newNode.next = dummy;
            dummy = newNode;
        }

        return dummy;
    }
}