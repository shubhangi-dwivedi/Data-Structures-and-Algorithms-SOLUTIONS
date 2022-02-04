//234. Palindrome Linked List
//https://leetcode.com/problems/palindrome-linked-list/submissions/

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

//Method-1 (using stack)
class Solution {
    public boolean isPalindrome(ListNode head) {
        Stack<Integer> s= new Stack<Integer>();
        ListNode p=head;
        
        while(p!=null){
            s.push(p.val);
            p=p.next;
        }
        
        p=head;
        
        while(p!=null){
            if(p.val==s.peek()){
                p=p.next;
                s.pop();
            }
            else
                return false;
        }
        
        return true;
    }
}