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
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        int target=count(head)-n;
        int count=0;
        ListNode* temp=head;
        if(target==0)
        return head->next;
        while(temp)
        {
            count++;
            if(count==target)
            break;
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }
};