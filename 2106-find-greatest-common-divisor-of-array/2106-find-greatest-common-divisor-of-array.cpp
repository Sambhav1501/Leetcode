class Solution {
public:

    int GCD(int b,int a)
    {
        while(b)
        {
            int temp=b;
            b=a%b;
            a=temp;
        }
        return a;
    }
    int findGCD(vector<int>& nums) 
    {
        int size=nums.size();
        int min=INT_MAX,max=INT_MIN;
        for(int i=0;i<size;i++)
        {
            if(min>nums[i])
            {
                min=nums[i];
            }
            if(max<nums[i])
            {
                max=nums[i];
            }
        }
        return GCD(min,max);
    }
};