class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) 
    {
        priority_queue<pair<double, pair<int, int>>> pq;
        int size = arr.size();

        for(int i = 0; i < size - 1; i++) {
            for(int j =i + 1; j < size; j++) {
                pq.push({((double) arr[i] / arr[j]), {arr[i], arr[j]}});

                if(pq.size() > k) {
                    pq.pop();
                }
            }
        }

        auto res = pq.top().second;
        return {res.first, res.second};
    }
};