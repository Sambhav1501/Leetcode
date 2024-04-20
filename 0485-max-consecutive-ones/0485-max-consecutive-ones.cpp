class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int size=nums.size();
        int c1=0;
        int ans=0;
        for(int i=0;i<size;++i)
        {
            if(nums[i]==1)
            {
                ++c1;
            }
            else
            {
                ans=max(ans,c1);
                c1=0;
            }
        }
        ans=max(ans,c1);
        return ans;
    }
};