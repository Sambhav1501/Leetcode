class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        int lenhay=haystack.length();
        int lenN=needle.length();
        int i=0,j=0;
        if(lenhay<lenN)
        return -1;
        while(i<lenhay)
        {
            while(j<lenN && haystack[i+j]==needle[j])
            {
                j++;
            }
            if(j==lenN)
            {
                return i;
            }
            j=0;
            i++;
        }
        return -1;
    }
};