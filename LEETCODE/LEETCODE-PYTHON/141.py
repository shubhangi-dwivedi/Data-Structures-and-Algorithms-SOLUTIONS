# 141. Linked List Cycle
# https://leetcode.com/problems/linked-list-cycle/description/

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

# Method-1 using hash map (TC-O(n), SC-O(n))
class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        nodes=set()
        curr=head

        while curr:
            if curr in nodes:
                return True
            
            nodes.add(curr)
            curr=curr.next

        return False


# Method-2 2-pointers or Floyd's Cycle Finding (TC-O(n+k)) [i is cycle length]
class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        if head is None:
            return False

        slow=head
        fast=head.next

        while slow!=fast:
            if fast is None or fast.next is None:
                return False

            slow=slow.next
            fast=fast.next.next

        return True