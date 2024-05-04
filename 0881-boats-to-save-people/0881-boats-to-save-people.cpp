class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) 
    {
        sort(people.begin(),people.end());
        int size=people.size();
        int count=0;
        int i=0,j=size-1;
        while(i<=j)
        {
            if(people[i]+people[j]<=limit)
            i++;
            j--;
            count++;
        }
        return count;
    }
};