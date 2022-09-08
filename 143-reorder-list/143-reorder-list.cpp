class Solution
{
    ListNode* reverse(ListNode *head)
    {
        ListNode *prev = NULL, *curr = head, *nxt = NULL;
        while (curr)
        {
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }
    public:
        void reorderList(ListNode *head)
        {
            ListNode *slow = head, *fast = head->next;

            while (fast && fast->next != NULL)
            {
                slow = slow->next;
                fast = fast->next->next;
            }

            ListNode *second = reverse(slow->next);
            slow->next = NULL;
            ListNode *first = head;

            while (second)
            {
                cout << second->val << " " << first->val << endl;
                ListNode *temp1 = first->next;
                ListNode *temp2 = second->next;
                first->next = second;
                second->next = temp1;
                first = temp1;
                second = temp2;
            }
        }
};