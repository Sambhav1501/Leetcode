class Solution {
public:
    int maximumLength(vector<int>& nums) 
    {
        int even=0,odd=0;
        int size=nums.size();
        unordered_map<int,pair<int,int>> map;
        for(int i=0;i<size;i++)
        {
            if(nums[i]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
            map[i]={even,odd};
        }
        int res1=1;
        int res2=0;
        for(int i=1;i<size;i++)
        {
            if(nums[i]%2==0&&nums[i-1]%2==1)
            {
                res1++;
            }
            else if(nums[i]%2==1&&nums[i-1]%2==0)
            {
                res2++;
            }
        }
        return max(even,max(odd,max(res1,max(res2,res1+res2))));
    }
};