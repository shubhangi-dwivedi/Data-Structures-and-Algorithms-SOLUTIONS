//234. Palindrome Linked List
//https://leetcode.com/problems/palindrome-linked-list/

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


//Method-1 (using vactor)
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


//Method-2 (using stack)
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode *p=head;
        
        stack<int>s;
        
        while(p){
            s.push(p->val);
            p=p->next;
        }
        
        p=head;
        while(p)
            if(p->val==s.top()){
                p=p->next;
                s.pop();
            }
            else
                return false;
        
        return true;
    }
    
};