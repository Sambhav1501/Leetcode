class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) 
    {
        int size=arr.size();
        int total_sum=0;
        for(int len=1;len<=size;len=len+2)
        {
            int window_sum=0;
            for(int i=0;i<len;i++)
            {
                window_sum=window_sum+arr[i];
            }
            total_sum=total_sum+window_sum;
            for(int i=len;i<size;i++)
            {
                window_sum=window_sum+arr[i]-arr[i-len];
                total_sum=total_sum+window_sum;
            }
        }
        return total_sum;
    }
};