class Solution {
public:
    vector<int> sumZero(int n) 
    {
        vector<int> ans(n);
        if(n%2==1)
        {
            int mid=n/2;
            for(int i=0;i<n;++i)
            {
                ans[i]=(i-mid);
            }
        }
        else
        {
            int mid=n/2;
            for(int i=0;i<n/2;i++)
            {
                ans[i]=mid*(-1);
                ans[n-1-i]=mid;
                mid--;
            }
        }
        return ans;
    }
};