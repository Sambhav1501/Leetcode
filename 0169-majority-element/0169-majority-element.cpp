class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int size=nums.size();
        unordered_map<int,int> map;
        for(int i=0;i<size;i++)
        {
            ++map[nums[i]];
        }
        int max=INT_MIN;
        int num=0;
        for(auto it:map)
        {
            if(max<it.second)
            {
                max=it.second;
                num=it.first;
            }
        }
        return num;
    }
};