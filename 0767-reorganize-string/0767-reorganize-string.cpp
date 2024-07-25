class Solution {
public:
    string reorganizeString(string s) 
    {
        int size=s.size();
        unordered_map<char,int> map;
        for(int i=0;i<size;i++)
        {
            map[s[i]]++;
        }
        priority_queue<pair<int,char>> pq;
        for(auto it:map)
        {
            pq.push({it.second,it.first});
        }
        string ans="";
        while(pq.size()>1)
        {
            auto a=pq.top();
            pq.pop();
            auto b=pq.top();
            pq.pop();
            ans=ans+a.second;
            ans=ans+b.second;
            a.first--;
            b.first--;
            if(a.first>0)
            {
                pq.push({a.first,a.second});
            }
            if(b.first>0)
            {
                pq.push({b.first,b.second});
            }
        }
        if(!pq.empty())
        {
            if(pq.top().first>1)
            return "";
            else
            return ans+pq.top().second;
        }
        return ans;
    }
};