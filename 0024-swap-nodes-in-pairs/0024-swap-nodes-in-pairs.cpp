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
    ListNode* swapPairs(ListNode* head) 
    {
        if(head==NULL||head->next==NULL)
        {
            return head;
        }
        ListNode* front=head->next;
        ListNode* back=head;
        while(front)
        {
            int temp=front->val;
            front->val=back->val;
            back->val=temp;
            front=front->next;
            if(front==NULL||front->next==NULL)
            break;
            front=front->next;
            back=back->next;
            back=back->next;
        }
        return head;
    }
};