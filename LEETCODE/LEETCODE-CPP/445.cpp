// 445. Add Two Numbers II
// https://leetcode.com/problems/add-two-numbers-ii/description/

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
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        stack<int> s1, s2;

        while (l1)
        {
            s1.push(l1->val);
            l1 = l1->next;
        }

        while (l2)
        {
            s2.push(l2->val);
            l2 = l2->next;
        }

        ListNode *dummy = NULL;
        int sum = 0, carry = 0;

        while (!s1.empty() || !s2.empty() || carry)
        {
            sum = carry;

            if (!s1.empty())
            {
                sum += s1.top();
                s1.pop();
            }

            if (!s2.empty())
            {
                sum += s2.top();
                s2.pop();
            }

            int num = sum % 10;
            carry = sum / 10;

            ListNode *newNode = new ListNode(num);
            newNode->next = dummy;
            dummy = newNode;
        }

        return dummy;
    }
};