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
    ListNode* removeNodes(ListNode* head) 
    {
        stack<int> st;
        while(head)
        {
            while(!st.empty() && st.top()<(head->val))
            {
                st.pop();
            }
            st.push(head->val);
            head=head->next;
        }
        head=NULL;
        while(!st.empty())
        {
            head=new ListNode(st.top(),head);
            st.pop();
        }
        return head;
    }
};