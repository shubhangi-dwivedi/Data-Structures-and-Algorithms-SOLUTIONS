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

// Method -1 using stack
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

// Method-2 reversing the LL
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *list1 = reverse(l1);
        ListNode *list2 = reverse(l2);

        ListNode *ans = NULL;

        int carry = 0, sum = 0;
        while (list1 || list2 || carry)
        {
            sum = carry;

            if (list1)
            {
                sum += list1->val;
                list1 = list1->next;
            }

            if (list2)
            {
                sum += list2->val;
                list2 = list2->next;
            }

            carry = sum / 10;

            ListNode *newNode = new ListNode(sum % 10);
            newNode->next = ans;
            ans = newNode;
        }

        return ans;
    }

    ListNode *reverse(ListNode *l1)
    {
        ListNode *prev = NULL;

        while (l1)
        {
            ListNode *next = l1->next;
            l1->next = prev;
            prev = l1;
            l1 = next;
        }

        return prev;
    }
};