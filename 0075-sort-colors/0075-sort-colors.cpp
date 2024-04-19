class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        int size=nums.size();
        int low=0,mid=0,high=size-1;
        for(int i=0;i<size;i++)
        {
            if(nums[mid]==0)
            {
                swap(nums[mid],nums[low]);
                ++mid;
                ++low;
            }
            else if(nums[mid]==1)
            {
                mid++;
            }
            else if(nums[mid]==2)
            {
                swap(nums[mid],nums[high]);
                --high;
            }
        }
    }
};