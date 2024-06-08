class Solution {
public:
    int hIndex(vector<int>& citations) 
    {
        int size=citations.size();
        sort(citations.begin(),citations.end());
        int ans=0;
        int i=0;
        for(i=1;i<=size;i++)
        {
            if(citations[size-i]<i)
            break;
        }
        return i-1;
    }
};