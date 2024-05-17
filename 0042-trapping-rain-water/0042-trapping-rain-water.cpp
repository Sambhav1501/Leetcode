class Solution {
public:
    int trap(vector<int>& height) 
    {
        int water=0;
        int size=height.size();

        vector<int> NGL(size,0);
        NGL[0]=height[0];
        for(int i=1;i<size;i++)
        {
            NGL[i]=max(height[i],NGL[i-1]);
        }

        vector<int> NGR(size,0);
        NGR[size-1]=height[size-1];
        for(int i=size-2;i>=0;i--)
        {
            NGR[i]=max(height[i],NGR[i+1]);
        }

        for(int i=0;i<size;i++)
        {
            water+=min(NGL[i],NGR[i])-height[i];
        }

        return water;
    }
};