class Solution {
public:
    bool canJump(vector<int>& nums) 
    {
        int size=nums.size();
        int i=size-1;
        int j=size-1;
        if(size==1)
        return true;
        if(nums[0]==0)
        return false;
        while(i>=0)
        {
            if(nums[i]==0)
            {
                --i;
            }
            else if(nums[i]+i>=j)
            {
                j=i;
                --i;
            }
            else
            --i;
        }
        if(j==0)
        return true;
        else
        return false;
    }
};