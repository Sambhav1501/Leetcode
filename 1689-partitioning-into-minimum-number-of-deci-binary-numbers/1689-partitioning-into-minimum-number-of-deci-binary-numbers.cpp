class Solution {
public:
    int minPartitions(string n) 
    {
        int ans=0;
        for(int i=0;i<n.size();i++)
        {
            int temp=(n[i]-'0');
            if(temp>ans)
            {
                ans=temp;
            }
        }
        return ans;
    }
};