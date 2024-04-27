class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
        unordered_map<int,int> map;
        int size1=nums1.size();
        int size2=nums2.size();
        for(int i=0;i<size2;++i)
        {
            map[nums2[i]]=i;
        }
        vector<int> ans(size1,-1);
        for(int i=0;i<size1;++i)
        {
            int max=nums1[i];
            int index=map[nums1[i]];
            for(int j=index+1;j<size2;++j)
            {
                if(nums2[j]>max)
                {
                    ans[i]=nums2[j];
                    j=size2;
                }
            }
        }
        return ans;
    }
};