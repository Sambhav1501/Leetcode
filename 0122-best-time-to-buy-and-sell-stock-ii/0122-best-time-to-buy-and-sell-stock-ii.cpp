class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int size=prices.size();
        int profit=0;
        int i=1;
        while(i<size)
        {
            int buy=prices[i-1];
            if(prices[i]>buy)
            {
                profit=profit+(prices[i]-buy);
            }
            ++i;
        }
        return profit;
    }
};