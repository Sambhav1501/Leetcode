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
    ListNode* mergeNodes(ListNode* head) 
    {
        ListNode* newHead=NULL;
        ListNode* temp=NULL;
        head=head->next;
        ListNode* temp2=NULL;
        int num=0;
        while(head)
        {
            num=num+head->val;
            if(head->val==0)
            {
                temp=new ListNode(num);
                num=0;
                if(newHead==NULL)
                {
                    newHead=temp;
                    temp2=newHead;

                }
                else
                {
                    temp2->next=temp;
                    temp2=temp2->next;
                }
            }
            head=head->next;
        }
        return newHead;
    }
};