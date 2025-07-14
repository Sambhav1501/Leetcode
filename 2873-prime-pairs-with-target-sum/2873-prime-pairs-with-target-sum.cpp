class Solution {
public:
    vector<vector<int>> findPrimePairs(int n) 
    {
        vector<vector<int>> ans;
        for (int i = 2; i <= n / 2; ++i) 
        {
            if (prime(i) && prime(n - i)) 
            {
                ans.push_back({i, n - i});
            }
        }
        return ans;
    }

    bool prime(int n)
    {
        if(n==1)
        {
            return false;
        }
        if(n==2)
        {
            return true;
        }
        if(n%2==0)
        {
            return false;
        }
        for(int i=3;i*i<=n;i=i+2)
        {
            if(n%i==0)
            return false;
        }
        return true;
    }
};