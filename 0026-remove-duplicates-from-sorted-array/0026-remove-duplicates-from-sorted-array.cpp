class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int size=nums.size();
        int i=1,j=1;
        for(i=1;i<size;++i)
        {
            if(nums[i]!=nums[i-1])
            {
                nums[j]=nums[i];
                ++j;
            }
        }
        return j;
    }
};