# 143. Reorder List
# https://leetcode.com/problems/reorder-list/description/

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

#Method-1 (TC-O(n))
class Solution:
    def reorderList(self, head: Optional[ListNode]) -> None:
        """
        Do not return anything, modify head in-place instead.
        """
        
        if not head:
            return

        #find middle
        slow=fast=head

        while fast and fast.next:
            slow=slow.next
            fast=fast.next.next

        #reverse 2nd part of LL
        prev=None
        curr=slow

        while curr:
            next_temp=curr.next
            curr.next=prev
            prev=curr
            curr=next_temp

        #merge both LL
        first=head
        second=prev

        while second.next:
            temp=first.next
            first.next=second
            first=temp

            temp=second.next
            second.next=first
            second=temp