class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        int size=nums.size();
        unordered_map<int,int> map;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(int i=0;i<size;i++)
        {
            map[nums[i]]++;
        }
        for(auto i=map.begin();i!=map.end();i++)
        {
            pq.push(make_pair(i->second,i->first));
            if(pq.size()>k)
            {
                pq.pop();
            }
        }
        vector<int> ans;
        for(int i=0;i<k;i++)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};