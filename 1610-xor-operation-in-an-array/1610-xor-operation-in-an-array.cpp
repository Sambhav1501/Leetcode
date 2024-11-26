class Solution {
public:
    int xorOperation(int n, int start) 
    {
        int bitwise=0;
        for(int i=0;i<n;i++)
        {
            bitwise=bitwise^(start+2*i);
        }
        return bitwise;
    }
};