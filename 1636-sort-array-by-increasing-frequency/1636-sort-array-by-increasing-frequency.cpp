class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) 
    {
        unordered_map<int,int> map;
        for(int num:nums)
        {
            map[num]++;
        }
        sort(nums.begin(),nums.end(),[&](int n1,int n2)
        {
            if(map[n1]!=map[n2])
            {
                return map[n1]<map[n2];
            }
            else
            {
                return n2<n1;
            }
        });
        return nums;
    }
};