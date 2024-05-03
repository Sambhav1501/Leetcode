class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) 
    {
        stack<int> st;
        int size=nums.size();
        vector<int> ans(size);
        for(int i=2*size-1;i>=0;--i)
        {
            while(!st.empty()&&st.top()<=nums[i%size])
            {
                st.pop();
            }
            if(i<size)
            {
                if(!st.empty())
                {
                    ans[i]=st.top();
                }
                else
                {
                    ans[i]=-1;
                }
            }
            st.push(nums[i%size]);
        }    
        return ans;
    }
};