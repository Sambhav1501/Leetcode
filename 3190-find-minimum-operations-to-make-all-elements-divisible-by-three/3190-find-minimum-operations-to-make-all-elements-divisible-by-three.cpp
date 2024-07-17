class Solution {
public:
    int minimumOperations(vector<int>& nums) 
    {
        int size=nums.size();
        int op=0;
        for(int i=0;i<size;i++)
        {
            if(nums[i]%3!=0)
            {
                op=op+1;
            }
        }
        return op;
    }
};