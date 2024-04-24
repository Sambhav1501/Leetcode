class Solution {
public:
    int myAtoi(string s) 
    {
        long sum=0;
        int len=s.length();
        int sign=1;
        int i=0;
        int flag=0;
        while (i < len && s[i] == ' ')
        {
            i++;
        }
        if(s[i]=='-'||s[i]=='+')
        {
            sign=(s[i]=='-')?-1:1;
            i++;
        }
        while(i<len&&s[i]>='0'&&s[i]<='9')
        {
            int temp=(s[i]-'0');
            sum=sum*10+temp;
            if(sum>INT_MAX)
            {
                if(sign==1)
                return INT_MAX;
                else
                return INT_MIN;
            }
            i++;
        }
        return sign*sum;
    }
};