class Solution {
public:
    int findMaxK(vector<int>& nums) 
    {
        int size=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<size;++i)
        {
            int l=i;
            int r=size-1;
            int target=nums[i]*-1;
            while(l<=r)
            {
                int mid=(l+r)/2;
                if(nums[mid]<target)
                {
                    l=mid+1;
                }
                else if(nums[mid]==target)
                {
                    return abs(nums[mid]);
                }
                else
                {
                    r=mid-1;
                }
            }
        }
        return -1;
    }
};