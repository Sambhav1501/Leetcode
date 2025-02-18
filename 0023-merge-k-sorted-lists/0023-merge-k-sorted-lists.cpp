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
    ListNode* mergeKLists(vector<ListNode*>& lists) 
    {
        int size=lists.size();
        priority_queue<int> pq;
        for(int i=0;i<size;i++)
        {
            while(lists[i])
            {
                pq.push(lists[i]->val);
                lists[i]=lists[i]->next;
            }
        }
        ListNode* head=NULL;
        while(!pq.empty())
        {
            head=new ListNode(pq.top(),head);
            pq.pop();
        }
        return head;
    }
};