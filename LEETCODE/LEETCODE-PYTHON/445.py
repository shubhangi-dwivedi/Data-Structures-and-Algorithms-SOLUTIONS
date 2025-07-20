#445. Add Two Numbers II
# https://leetcode.com/problems/add-two-numbers-ii/description/

# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

# Method - 1 using stack
class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: Optional[ListNode]
        :type l2: Optional[ListNode]
        :rtype: Optional[ListNode]
        """

        s1 = []
        s2 = []

        # Push all values from l1 into s1
        while l1:
            s1.append(l1.val)
            l1 = l1.next

        # Push all values from l2 into s2
        while l2:
            s2.append(l2.val)
            l2 = l2.next

        carry = 0
        head = None

        # Process stacks and carry
        while s1 or s2 or carry:
            total = carry

            if s1:
                total += s1.pop()

            if s2:
                total += s2.pop()

            digit = total % 10
            carry = total // 10

            # Insert the digit at the head of the result list
            new_node = ListNode(digit)
            new_node.next = head
            head = new_node

        return head
        
# Method - 2 using reversed LL
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        list1 = self.reverse(l1)
        list2 = self.reverse(l2)
        
        carry = 0
        ans = None

        while list1 or list2 or carry:
            sum_ = carry

            if list1:
                sum_ += list1.val
                list1 = list1.next

            if list2:
                sum_ += list2.val
                list2 = list2.next

            carry = sum_ // 10
            new_node = ListNode(sum_ % 10)
            new_node.next = ans
            ans = new_node

        return ans

    def reverse(self, head: ListNode) -> ListNode:
        prev = None
        while head:
            next_node = head.next
            head.next = prev
            prev = head
            head = next_node
        return prev