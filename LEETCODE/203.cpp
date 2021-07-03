//203. Remove Linked List Elements

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
    ListNode* removeElements(ListNode* head, int val) {
        
        ListNode *ptr1=head;
        ListNode *temp=nullptr;
        
        if(head==nullptr) 
            return nullptr;
        
        
        while(ptr1->next!=nullptr)
        {
            if(ptr1->next->val==val)
                ptr1->next=ptr1->next->next;
            
            else
                ptr1=ptr1->next;
        } 
        
        while(head!=nullptr && head->val==val)
            head = head->next;
        
        return head;
    }
};