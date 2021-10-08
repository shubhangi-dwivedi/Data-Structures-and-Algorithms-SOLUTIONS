//234. Palindrome Linked List


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
    bool isPalindrome(ListNode* head) {
        
        ListNode* ptr;
        vector<int> v;
        
        if(head==NULL)
            return -1;
        
        while(ptr)
        {
            v.push_back(ptr->val);
            ptr=ptr->next;
        }
        
        int n=v.size();
        int end=n-1;
        for(int i=0;i<n/2;i++)
        {
            if(v[i]!=v[end])
                return false;
            end--;
        }
        
        return true;
        
    }
};