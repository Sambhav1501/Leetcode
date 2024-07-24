class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) 
    {
        int size=matrix.size();
        priority_queue<int> pq;
        for(int i=0;i<size;i++)
        {
            for(int j=0;j<size;j++)
            {
                pq.push(matrix[i][j]);
                if(pq.size()>k)
                {
                    pq.pop();
                }
            }
        }
        return pq.top();
    }
};