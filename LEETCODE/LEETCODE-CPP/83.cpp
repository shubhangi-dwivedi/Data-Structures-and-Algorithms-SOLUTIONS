//83. Remove Duplicates from Sorted List
//https://leetcode.com/problems/remove-duplicates-from-sorted-list/submissions/

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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* ptr1=head, *ptr2;
        
        if(head==NULL || head->next==NULL)
            return head;
        
        ptr2=ptr1->next;
        while(ptr2!=NULL){
            if(ptr1->val==ptr2->val){
                ptr1->next=ptr2->next;
                ptr2=ptr2->next;
            }
            else
                ptr1=ptr1->next;
        }
        
        return head;
    }
};