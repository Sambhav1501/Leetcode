class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        int pos=binarySearch(nums,target);
        int size=nums.size();
        vector<int> ans;
        if(pos==-1)
        {
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        int l=pos;
        int r=pos;
        while((l>=0&&nums[l]==target)||(r<size&&nums[r]==target))
        {
            if(l>=0&&nums[l]==target)
            {
                l--;
            }
            if(r<size&&nums[r]==target)
            {
                r++;
            }
        }
        ans.push_back(l+1);
        ans.push_back(r-1);
        return ans;
    }
    int binarySearch(vector<int>& nums, int target)
    {
        int r=nums.size()-1;
        int l=0;
        while(l<=r)
        {
            int mid=(l+r)/2;
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
        return -1;
    }
};