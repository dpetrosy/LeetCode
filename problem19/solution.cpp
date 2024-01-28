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
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        ListNode* slow = head;
        ListNode* fast = head;
        int distance = 0;

        while (fast->next)
        {
            if (distance == n)
                slow = slow->next;
            else
                ++distance;
            fast = fast->next;
        }
        if (distance < n)
            return head->next;

        slow->next = slow->next->next;
        return head;
    }
};
