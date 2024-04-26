class Solution {
public:
    int tribonacci(int n) 
    {
        int n0=0;
        int n1=1;
        int n2=1;
        if(n==0)
        {
            return 0;
        }
        if(n<=2)
        {
            return 1;
        }
        for(int i=2;i<n;i++)
        {
            int sum=n2+n1+n0;
            n0=n1;
            n1=n2;
            n2=sum;
        }
        return n2;
    }
};