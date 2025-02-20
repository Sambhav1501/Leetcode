class Solution {
public:
    int nthUglyNumber(int n) 
    {
        int count=0;
        priority_queue<long long,vector<long long>,greater<long long>> pq;
        pq.push(1);
        unordered_map<long long,long long> map;
        map[1]++;
        while(count<n-1)
        {
            long long curr=pq.top();
            pq.pop();
            count++;
            if(map.find(curr*2)==map.end())
            {
                pq.push(curr*2);
                map[curr*2]++;
            }
            if(map.find(curr*3)==map.end())
            {
                pq.push(curr*3);
                map[curr*3]++;
            }
            if(map.find(curr*5)==map.end())
            {
                pq.push(curr*5);
                map[curr*5]++;
            }
        }

        return (int)pq.top();
    }
};