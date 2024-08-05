class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) 
    {
        int size=arr.size();
        unordered_map<string,int> map;
        for(int i=0;i<size;i++)
        {
            map[arr[i]]++;
        }
        int count=0;
        for(int i=0;i<size;i++)
        {
            if(map[arr[i]]==1)
            {
                count++;
                if(count==k)
                {
                    return arr[i];
                }
            }
        }
        return "";
    }
};