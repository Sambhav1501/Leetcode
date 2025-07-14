class Solution {
public:
    int maxProduct(int n) 
    {
        int max1=0;
        int max2=0;
        while(n!=0)
        {
            int temp=n%10;
            if(max1<temp)
            {
                max2=max1;
                max1=temp;
            }
            else if(max2<temp)
            {
                max2=temp;
            }
            n=n/10;
        }
        return max1*max2;
    }
};