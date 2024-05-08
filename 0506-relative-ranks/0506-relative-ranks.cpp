class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) 
    {
        int size=score.size();
        vector<string> ans(size);
        priority_queue<pair<int,int>> pq;
        for(int i=0;i<size;++i)
        {
            pq.push(make_pair(score[i],i));
        }
        for(int i=0;i<size;++i)
        {
            int indx=pq.top().second;
            if(i==0)
            ans[indx]="Gold Medal";
            else if(i==1)
            ans[indx]="Silver Medal";
            else if(i==2)
            ans[indx]="Bronze Medal";
            else
            ans[indx]=to_string(i+1);
            pq.pop();
        }
        return ans;
    }
};