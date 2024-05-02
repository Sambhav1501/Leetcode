class Solution {
public:
    bool checkString(string s) 
    {
        int len=s.length();
        int flag=0;
        for(int i=0;i<len;++i)
        {
            if(s[i]=='b')
            {
                flag=1;
            }
            if(flag==1&&s[i]=='a')
            {
                return false;
            }
        }
        return true;
    }
};