class Solution {
public:
    int trailingZeroes(int n) 
    {
        int count=0;
        //int factorial you get a zero due to a multiple of 5 
        //so we will count all the multiples of five with power 
        for(int i=5;i<=n;i=i+5)
        {
            int j=5;
            while(i%j==0)
            {
                count++;
                j=j*5;
            }
        }
        return count;
    }
};