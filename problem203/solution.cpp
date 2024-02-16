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
    ListNode* removeElements(ListNode* head, int val)
    {
        while (head && head->val == val)
            head = head->next;

        ListNode* it = head;
        while (it && it->next)
        {
            if (it->next->val == val)
                it->next = it->next->next;
            else
                it = it->next;
        }
        return head;
    }
};
