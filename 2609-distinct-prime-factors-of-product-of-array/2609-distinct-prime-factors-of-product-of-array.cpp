class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) 
    {
        int size=nums.size();
        int i=0;
        unordered_map<int,int> mp;
        while(i<size)
        {
            int divisor=2;
            while(nums[i]!=1)
            {
                int flag=0;
                while(nums[i]%divisor==0)
                {
                    nums[i]=nums[i]/divisor;
                    flag=1;
                }
                if(flag==1)
                {
                    mp[divisor]++;
                    divisor++;
                }
                else
                {
                    divisor++;
                }
            }
            i++;
        }
        return mp.size();
    }
};