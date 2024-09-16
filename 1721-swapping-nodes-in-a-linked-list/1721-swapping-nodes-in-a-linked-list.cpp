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
    int count(ListNode* head)
    {
        int count=0;
        while(head)
        {
            count++;
            head=head->next;
        }
        return count;
    }
    ListNode* swapNodes(ListNode* head, int k) 
    {
        int c=count(head);
        if(c==1||c==0)
        return head;
        if((c/2)<k)
        {
            k=c+1-k;
        }
        int target=c-k+1;
        int count=0;
        ListNode* temp=head;
        ListNode* temp1=head;

        while(temp)
        {
            count++;
            if(count<k)
            {
                temp1=temp1->next;
            }
            else if(count==target)
            break;
            temp=temp->next;
        }
        int t=temp->val;
        temp->val=temp1->val;
        temp1->val=t;
        return head;
    }
};