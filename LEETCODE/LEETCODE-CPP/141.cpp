//141. Linked List Cycle
//https://leetcode.com/problems/linked-list-cycle/

//Method-1 (using hashmap)
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