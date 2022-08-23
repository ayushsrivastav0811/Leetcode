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
    ListNode* reverse(ListNode* head)
    {
       ListNode *prev=NULL,*curr=head,*nex=head;
        if(head==NULL)
            return head;
        while(curr!=NULL)
        {
            nex=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nex;
        }
        return prev;
    }      
public:
    bool isPalindrome(ListNode* head) {
        ListNode *slow=head,*fast=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
     
        ListNode *temp=reverse(slow);
        while(head!=NULL && temp!=NULL )
        {
            if(head->val!=temp->val)
                return 0;
            cout<<1<<" ";
            head=head->next;
            temp=temp->next;
        }
        return 1;
    }
};