# 2. Add Two Numbers
# https://leetcode.com/problems/stream-of-characters/

# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: Optional[ListNode]
        :type l2: Optional[ListNode]
        :rtype: Optional[ListNode]
        """

        dummy= ListNode()
        res=dummy

        sum=carry=0

        while l1 or l2 or carry:
            sum=carry

            if l1:
                sum+=l1.val
                l1=l1.next

            if l2:
                sum+=l2.val
                l2=l2.next

            num= sum%10
            carry = sum//10

            dummy.next=ListNode(num)
            dummy=dummy.next

        return res.next

        