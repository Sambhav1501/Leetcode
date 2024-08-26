class Solution {
public:
    int titleToNumber(string columnTitle) 
    {
        int size=columnTitle.size();
        int ans=0;
        for(int i=size-1;i>=0;--i)
        {
            int ch=columnTitle[i]-'A'+1;
            ans=ans+(ch*pow(26,size-1-i));
        }
        return ans;
    }
};