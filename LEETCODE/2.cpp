//2. Add Two Numbers

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int x=0;
        
        ListNode* dummy = new ListNode(0), *cur = dummy;
        

        while(l1||l2||x)
        {
            if(l1)
            {
                x+=l1->val;
                l1=l1->next;
            }
        
            if(l2)
            {
                x+=l2->val;
                l2=l2->next;
            }
        
            
            cur->next= new ListNode(x%10);
            x/=10;
            
            cur=cur->next;
            
        }
        
        return dummy->next;
        
    }
};