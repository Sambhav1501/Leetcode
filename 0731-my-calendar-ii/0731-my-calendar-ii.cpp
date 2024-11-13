class MyCalendarTwo {
private:
    map<int,int> Map;
public:
    MyCalendarTwo() 
    {
    }
    
    bool book(int startTime, int endTime) 
    {
        Map[startTime]++;
        Map[endTime]--;

        int sum=0;
        for(auto it=Map.begin();it!=Map.end();it++)
        {
            sum=sum+it->second;
            if(sum>2)
            {
                Map[startTime]--;
                Map[endTime]++;
                return false;
            }
        }
        return true;
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(startTime,endTime);
 */