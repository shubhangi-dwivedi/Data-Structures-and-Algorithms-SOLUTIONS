//19. Remove Nth Node From End of List

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* ptr1=head;
        int count=0;
        
        while(ptr1){
            count++;
            ptr1=ptr1->next;
        }
        
        int x=count-n+1;
        
        if(x==1){
            head=head->next;
            return head;
        }
        
        ptr1=head;
        while(x>2 && ptr1){
            x--;
            ptr1=ptr1->next;
        }
        ListNode* temp=NULL;
        temp=ptr1->next;
        ptr1->next=ptr1->next->next;
        delete temp;
        
        return head;
    }
};