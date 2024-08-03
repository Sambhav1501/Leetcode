class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) 
    {
        unordered_map<int,int> count;
        for(int i:target)
        {
            count[i]++;
        }
        for(int i:arr)
        {
            count[i]--;
            if(count[i]==0)
            {
                count.erase(i);
            }
        }
        if(count.size()==0)
        return true;
        return false;
    }
};