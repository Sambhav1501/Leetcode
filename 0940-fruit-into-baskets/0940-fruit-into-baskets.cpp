class Solution {
public:
    int totalFruit(vector<int>& fruits) 
    {
        int size=fruits.size();
        unordered_map<int,int> map;
        int j=0;
        int max=0;
        for(int i=0;i<size;i++)
        {
            map[fruits[i]]++;
            while(j<size&&map.size()>2)
            {
                map[fruits[j]]--;
                if(map[fruits[j]]==0)
                {
                    map.erase(fruits[j]);
                }
                j++;
            }
            int fruit=i-j+1;
            if(max<fruit)
            {
                max=fruit;
            }
        }
        return max;
    }
};