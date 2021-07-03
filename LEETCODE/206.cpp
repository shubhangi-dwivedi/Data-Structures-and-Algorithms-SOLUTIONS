//206. Reverse Linked List
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
    ListNode* reverseList(ListNode* head) 
    {
        struct ListNode *q=NULL;
        struct ListNode *p;
        struct ListNode *t=head;
        if(head==NULL || head->next==NULL)
            return head;
        else
           while(t) 
           {
               p=q;
               q=t;
               t=t->next;
               q->next=p;
           }
        head=q;
        return head;
    }
};