class Solution {
public:
    bool doesAliceWin(string s) 
    {
        int size=s.size();
        int vowelcount=0;
        int i=0;
        while(i<size)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                vowelcount++;
            }
            i++;
        }
        if(vowelcount==0)
        {
            return false;
        }
        return true;
    }
};