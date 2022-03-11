//61. Rotate List
//https://leetcode.com/problems/rotate-list/

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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL)
            return head;
        
        ListNode* ptr=head;
        int n=0;
        while(ptr){
            n++;
            ptr=ptr->next;
        }
        
        if(k%n==0)
            return head;
        
        int x=k%n;
        //every time loop goes to 2nd last element and attached it to head
        for(int i=1;i<=x;i++){
            ptr=head;
            
            while(ptr->next->next!=NULL)
                ptr=ptr->next;
            
            ptr->next->next=head;
            head=ptr->next;
            ptr->next=NULL;
        }
        
        return head;
    }
};