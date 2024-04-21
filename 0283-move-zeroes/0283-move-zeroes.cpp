class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int size=nums.size();
        int count=0;
        vector<int> ans(size);
        int i=0,j=0;
        while(i<size)
        {
            if(nums[i]==0)
            {
                ++count;
            }
            else
            {
                ans[j]=nums[i];
                ++j;
            }
            ++i;
        }
        nums=ans;
    }
};