class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        unordered_map<int,int> map;
        int size=nums.size();
        for(int i=0;i<size;i++)
        {
            map[nums[i]]++;
        }
        int max=0;
        int num=0;
        for(int i=0;i<size;i++)
        {
            if(max<map[nums[i]])
            {
                max=map[nums[i]];
                num=nums[i];
            }
        }
        return num;
    }
};