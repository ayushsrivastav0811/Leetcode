
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int>s1,s2;
        while(l1){
            s1.push(l1->val);
            l1=l1->next;
        }
        while(l2){
            s2.push(l2->val);
            l2=l2->next;
        }
        ListNode *dummy=new ListNode(NULL);
        ListNode *curr=NULL;
        int first,second,carry=0;
        while(!s1.empty() || !s2.empty() || carry){
            int sum;
            if(!s1.empty()){
                first=s1.top();
                s1.pop();
            }
            else
                first=0;
            if(!s2.empty()){
                second=s2.top();
                s2.pop();
            }
            else
                second=0;
           sum=first+second+carry;
            ListNode *temp=new ListNode(sum%10);
            temp->next=curr;
            curr=temp;
            carry=sum/10;
        }
        return curr;
    }
};