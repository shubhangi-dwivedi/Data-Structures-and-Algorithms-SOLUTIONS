//160. Intersection of Two Linked Lists

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode * ptr1=headA;
        ListNode * ptr2=headB;
        stack<ListNode *> A;
        stack<ListNode *> B;
        
        if(headA==headB)
            return headB;
        
        while(ptr1){
            A.push(ptr1);
            ptr1=ptr1->next;
        }
        
        while(ptr2){
            B.push(ptr2);
            ptr2=ptr2->next;
        }
        
        ListNode * res=NULL;
        
        do{
            if(A.top()==B.top()){
                res=A.top();
                A.pop(),B.pop();
            }
            else
                break;
        }while(!A.empty() && !B.empty());
        
        return res;
    }
};