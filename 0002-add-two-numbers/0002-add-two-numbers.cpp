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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        ListNode* head = NULL;
        ListNode* temp= NULL;
        ListNode* pointer= NULL;
        int carry = 0;
        while (l1 || l2 || carry) 
        {
            int sum = carry;

            if (l1) 
            {
                sum=sum+l1->val;
                l1=l1->next;
            }
            if (l2) 
            {
                sum=sum+l2->val;
                l2=l2->next;
            }

            carry = sum / 10; 
            sum = sum % 10; 
            temp = new ListNode(sum,NULL);
            if(head==NULL)
            {
                head=temp;
                pointer=temp;
            }
            else
            {
                pointer->next=temp;
                pointer=pointer->next;
            }
        }
        if (carry) 
        {
            temp = new ListNode(carry,NULL);
            pointer->next=temp;
            pointer=pointer->next;
        }

        return head;
    }
};
