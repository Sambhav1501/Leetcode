class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int size=nums.size();
        int ans=0;
        if(target<nums[0])
        {
            return 0;
        }
        else if(nums[size-1]<target)
        {
            return size;
        }
        else
        {
            ans=binarySearch(nums,target);
        }
        return ans;
    }
    
    int binarySearch(vector<int>& nums, int target)
    {
        int r=nums.size()-1;
        int l=0;
        int mid=0;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]<target)
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        if(nums[mid]<target)
        {
            while(mid<nums.size()&&nums[mid]<target)
            {
                mid++;
            }
            return mid;
        }
        else
        {
            while(mid>=0&&nums[mid]>target)
            {
                mid--;
            }
            return mid+1;
        }
        return mid;
    }
};