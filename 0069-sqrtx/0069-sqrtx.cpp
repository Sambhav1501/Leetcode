class Solution {
public:
    int mySqrt(int x) 
    {
        int l=0;
        int r=x;
        int mid=0;
        if(x==0)
        {
            return 0;
        }
        while(l<=r)
        {
            mid=(l+r)/2;
            if(((long)mid*mid)>x)
            {
                r=mid-1;
            }
            else if(((long)mid*mid)==x)//for perfect roots like 4,9,16
            {
                return mid;
            }
            else
            {
                l=mid+1;
            }
        }
        return r;//for other roots like 8,10,21
    }
};