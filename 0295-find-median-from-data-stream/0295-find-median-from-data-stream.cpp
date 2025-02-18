class MedianFinder {
public:
    MedianFinder() {
        
    }
    priority_queue<int> pqmax;
    priority_queue<int,vector<int>,greater<int>> pqmin;
    void addNum(int num) 
    {
        if(pqmax.size()==0||pqmax.top()>=num)
        {
            pqmax.push(num);
        }
        else
        {
            pqmin.push(num);
        }
        if (pqmax.size() > pqmin.size() + 1) 
        {
            pqmin.push(pqmax.top());
            pqmax.pop();
        } else if (pqmin.size() > pqmax.size()) 
        {
            pqmax.push(pqmin.top());
            pqmin.pop();
        }
    }
    
    double findMedian() 
    {
        double median=0;
        if(pqmax.size()-pqmin.size()==0)
        {
            median=(pqmax.top()+pqmin.top())/2.0;
            return median;
        }
        return pqmax.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */