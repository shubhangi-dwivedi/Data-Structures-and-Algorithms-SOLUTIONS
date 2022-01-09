//142. Linked List Cycle II

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode * temp=head;
        unordered_map<ListNode *,bool>l;
        
        while(temp){
            if(l.count(temp))
               break;
            
            l[temp]=true;
            temp=temp->next;
        }
        
        return temp;
    }
};