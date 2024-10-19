class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        unordered_map<int,int> map;
        int sizeN=nums.size();
        for(int i=0;i<sizeN;i++)
        {
            map[nums[i]]++;
        }
        if(map.size()==sizeN)
        return false;
        else
        return  true;
    }
};