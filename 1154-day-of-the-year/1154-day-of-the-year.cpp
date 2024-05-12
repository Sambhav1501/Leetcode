class Solution {
public:
    int dayOfYear(string date) 
    {
        int year=((((date[0]-'0')*1000)+(date[1]-'0')*100)+(date[2]-'0')*10)+(date[3]-'0');
        int month=((date[5]-'0')*10)+(date[6]-'0');
        int day=((date[8]-'0')*10)+(date[9]-'0');
        vector<int > days={31,28,31,30,31,30,31,31,30,31,30,31};
        int ans=0;
        for(int i=1;i<month;i++)
        {
            ans=ans+days[i-1];
        }
        ans=ans+day;
        if(year%400==0 && month>2)
        {
            ans=ans+1;
        }
        else if(year%100!=0&&year%4==0 && month>2)
        {
            ans=ans+1;
        }
        return ans;
    }
};