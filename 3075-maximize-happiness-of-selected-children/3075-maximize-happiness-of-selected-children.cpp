class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) 
    {
        int size=happiness.size();
        sort(happiness.begin(),happiness.end(),greater<int>());
        long long sum=0;
        int i=0;
        while(i<k)
        {
            long long temp=happiness[i]-i;
            if(temp>0)
            {
                sum=sum+temp;
            }
            ++i;
        }
        return sum;
    }
};