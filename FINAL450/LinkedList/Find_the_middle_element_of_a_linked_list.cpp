//https://leetcode.com/problems/middle-of-the-linked-list/
//Find the middle of the Linked List


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *ptr1=head;
        int count=0;
        
        while(ptr1)
        {
            count++;
            ptr1=ptr1->next;
        }
        
        int mid=ceil(count/2);
        ListNode *ptr2=head;
        int res;
        
        while(mid--)
            ptr2=ptr2->next;
        
        return ptr2;
    }
};