class Solution {
public:
    int appendCharacters(string s, string t) 
    {
        int sizes=s.size();
        int sizet=t.size();
        int i=0,j=0;
        while(i<sizes)
        {
            if(s[i]==t[j])
            {
                j++;
            }
            i++;
        }
        return sizet-j;
    }
};