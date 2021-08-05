//148. Sort List

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
    ListNode* sortList(ListNode* head) {
        vector<int> v;
        ListNode* ptr1=head;
        
        if(head==NULL)
            return head;
        
        while(ptr1)
        {
            v.push_back(ptr1->val);
            ptr1=ptr1->next;
        }
        
        sort(v.begin(),v.end());
        
        ListNode* ptr2=head;
        for(int i=0;i<v.size();i++)
        {
            ptr2->val=v[i];
            ptr2=ptr2->next;
        }
        
        return head;
    }
};