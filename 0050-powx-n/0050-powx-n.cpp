class Solution {
public:
    double myPow(double x, int nn) 
    {
        int n=abs(nn);
        double ans=1.0;
        while(n>0)
        {
            if(n%2==1)
            {
                ans=ans*x;
                n--;
            }
            else
            {
                x=x*x;
                n=n/2;
            }
        }
        if(nn<0)
        {
            return 1.0/ans;
        }
        else
        {
            return ans;
        }
    }
};