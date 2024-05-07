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
    ListNode* doubleIt(ListNode* head) 
    {
        stack<int> st;
        st.push(0);
        while(head)
        {
            st.push((head->val)*2);
            head=head->next;
        }
        head=NULL;
        while(!st.empty())
        {
            if(st.size()==1&&st.top()==0)
            {
                return head;
            }
            else if(st.top()>9)
            {
                int temp=st.top();
                st.pop();
                head=new ListNode((temp%10),head);
                int num=st.top()+(temp/10);
                st.pop();
                st.push(num);
            }
            else
            {
                head=new ListNode(st.top(),head);
                st.pop();
            }
        }
        return head;
    }
};