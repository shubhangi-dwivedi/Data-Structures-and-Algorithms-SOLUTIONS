//82. Remove Duplicates from Sorted List II
//https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/

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
        ListNode* new_LL=new ListNode(0,head); //dummy node
        ListNode* ptr2=new_LL;
        
        while(head!=NULL){
            if(head->next!=NULL && head->val== head->next->val){
                while(head->next!=NULL && head->val== head->next->val)
                    head=head->next;
                
                ptr2->next=head->next;
            }
            else
                ptr2=ptr2->next;
            
            head=head->next;
        }
        
        return new_LL->next;
    }
};