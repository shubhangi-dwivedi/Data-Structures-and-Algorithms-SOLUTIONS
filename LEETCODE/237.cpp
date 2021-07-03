//237. Delete Node in a Linked List


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */


 //Method 1
class Solution {
public:
    void deleteNode(ListNode* node) {
        
        *node=*(node->next);
    }
};


//Method 2
class Solution {
public:
    void deleteNode(ListNode* node) {
        
        ListNode *ptr=node->next;
        *node= *ptr;
        
        delete ptr;
    }
};