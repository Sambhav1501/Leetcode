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
    int getDecimalValue(ListNode* head) 
    {
        stack<int> st;
        while(head)
        {
            st.push(head->val);
            head=head->next;
        }
        int mul=1;
        int res=0;
        while(!st.empty())
        {
            res=res+mul*st.top();
            st.pop();
            mul=mul*2;
        }
        return res;
    }
};