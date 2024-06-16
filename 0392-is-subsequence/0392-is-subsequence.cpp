class Solution {
public:
    bool isSubsequence(string s, string t) 
    {
        int len1=s.length();
        int len2=t.length();
        int i=0;
        int j=0;
        while(i<len1&&j<len2)
        {
            if(s[i]==t[j])
            {
                i++;
            }
            j++;
        }
        return (i==len1)?true:false;
    }
};