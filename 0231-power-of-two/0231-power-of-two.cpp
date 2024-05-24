class Solution {
public:
    bool isPowerOfTwo(int n) 
    {
        long long temp=1;
        while(temp<=n)
        {
            if(temp==n)
            {
                return true;
            }
            temp=temp*2;
        }
        return false;
    }
};