class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        unordered_map<int,int> map;
        int size=nums.size();
        int i=1,j=1;
        int count=1;
        for(i=1;i<size;++i)
        {
            
            if(nums[i]!=nums[i-1])
            {
                count=1;
            }
            else
            {
                ++count;
            }
            if(count<=2)
            {
                nums[j]=nums[i];
                ++j;
            }
        }
        return j;
    }
};