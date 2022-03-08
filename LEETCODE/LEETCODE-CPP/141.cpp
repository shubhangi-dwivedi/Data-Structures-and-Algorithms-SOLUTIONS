//141. Linked List Cycle
//https://leetcode.com/problems/linked-list-cycle/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

//Method-1 (using hashmap)
class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        unordered_map<ListNode*,bool> m;
        ListNode* temp=head;
        
        while(temp!=NULL)
        {
            if(m.count(temp)!=0)
                return true;
            
            m[temp]=1;
            temp=temp->next;
        }
        
        return false;
    }
};

//Method-2 (2 pointer approach)
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *a=head, *b=head;
        
        while(b!=NULL && b->next!=NULL){
            a=a->next;
            b=b->next->next;
            
            if(a==b)
                return true;
        }
        
        return false;
    }
};