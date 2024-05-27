class Solution {
public:
    int specialArray(vector<int>& nums) 
    {
        int size=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<=size;i++)
        {
            int count=0;
            int j=0;
            while(j<size&&nums[j]<i)
            {
                j++;
            }
            count=size-j;
            if(count==i)
            return i;
        }
        return -1;
    }
};