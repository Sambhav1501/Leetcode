class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) 
    {
        int size=nums.size();
        int l=0;
        int r=size-1;
        int i=size-1;
        vector <int> ans(size,0);
        while(l<=r)
        {
            int templ=nums[l]*nums[l];
            int tempr=nums[r]*nums[r];
            if(templ>tempr)
            {
                ans[i]=templ;
                l++;
            }
            else
            {
                ans[i]=tempr;
                r--;
            }
            i--;
        }
        return ans;
    } 
};