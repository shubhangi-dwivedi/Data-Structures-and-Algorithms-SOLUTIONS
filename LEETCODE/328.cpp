//328. Odd Even Linked List

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
    ListNode* oddEvenList(ListNode* head) {
        
        if(head==NULL)
            return head;
        
        ListNode* o=head; //odd
        ListNode* ohead=head;  //odd head
        ListNode* e=head->next; //even
        ListNode* ehead=head->next; //even head 
        
        while(e && e->next){
            o->next=o->next->next;
            e->next=e->next->next;
            
            o=o->next;
            e=e->next;
        }
        
        o->next=ehead;
        
        return ohead;
    }
};