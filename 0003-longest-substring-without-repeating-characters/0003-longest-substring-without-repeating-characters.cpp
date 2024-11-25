class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int right=0;
        int left=0;
        int i=0,j=0;
        int length=0;
        int len=s.length();
        unordered_map<char,int> map;
        if(len==0)
        {
            return 0;
        }
        while(i<len)
        {
            map[s[i]]++;
            while(j<len&&map[s[i]]==2)
            {
                map[s[j]]--;
                j++;
            }
            if(length<abs(i-j))
            {
                length=abs(i-j);
                left=j;
                right=i;
            }
            i++;
        }
        length=abs(right-left)+1;
        return length;
    }
};