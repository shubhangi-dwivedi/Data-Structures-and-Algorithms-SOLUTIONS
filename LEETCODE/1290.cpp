//1290. Convert Binary Number in a Linked List to Integer


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
    int getDecimalValue(ListNode* head) {
        
        vector<int> v;
        ListNode* ptr=head;
        if(head==NULL)
            return -1;
        
        while(ptr)
        {
            v.push_back(ptr->val);
            ptr=ptr->next;
        }
        
        int n=v.size(),sum=0;
        reverse(v.begin(),v.end());
        for(int i=0;i<n;i++)
            sum=sum+(v[i]*pow(2,i));
        
        return sum;
        
    }
};