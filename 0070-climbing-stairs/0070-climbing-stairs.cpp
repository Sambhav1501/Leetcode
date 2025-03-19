class Solution {
public:
    int climbStairs(int n) {
        vector <int> dp(n+1,-1);
        return steps(n,0,dp);
    }
    int steps(int n,int i,vector<int> &dp)
    {
        if(i==n)
        {
            return 1;
        }
        else if(i>n)
        {
            return 0;
        }
        if(dp[i]!=-1)
        {
            return dp[i];
        }
        return dp[i]=steps(n,i+1,dp)+steps(n,i+2,dp);
    }
};