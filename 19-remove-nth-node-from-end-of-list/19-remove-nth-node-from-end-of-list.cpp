/**
 *Definition for singly-linked list.
 *struct ListNode {
 *    int val;
 *    ListNode * next;
 *    ListNode() : val(0), next(nullptr) {}
 *    ListNode(int x) : val(x), next(nullptr) {}
 *    ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    public:
        ListNode* removeNthFromEnd(ListNode *head, int n)
        {
            ListNode *dummy = head, *slow = head, *fast = head;
            int counter = n;
            while (counter)
            {
                fast = fast->next;
                counter = counter - 1;
            }
           	//         corner case when I nhave to delete the first node
            if (fast== NULL)
            {
                dummy = dummy->next;
            }
            else
            {
                while (fast->next != NULL)
                {
                    fast = fast->next;
                    slow = slow->next;
                }

                slow->next = slow->next->next;
            }
            return dummy;
        }
};