class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int l=0;
        int r=height.size()-1;
        int max=0;
        while(l<r)
        {
            int h=min(height[l],height[r]);
            int w=r-l;
            int water=h*w;
            if(water>max)
            {
                max=water;
            }
            if(height[l]<height[r])
            l++;
            else
            r--;
        }
        return max;
    }
};