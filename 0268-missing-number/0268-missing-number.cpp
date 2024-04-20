class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i=0;
        int length=size(nums);
        int sum=(length*(length+1))/2;
        for(i=0;i<length;i++)
        {  
            sum=sum-nums[i];
        }
        return sum;
    }
};