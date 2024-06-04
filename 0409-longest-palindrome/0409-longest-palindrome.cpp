class Solution {
public:
    int longestPalindrome(string s) 
    {
        int odd=0;
        int even=0;
        int len=s.length();
        unordered_map<char,int> map;
        for(int i=0;i<len;++i)
        {
            ++map[s[i]];
        }
        for(auto i:map)
        {
            even=even+(i.second/2);
            odd=odd+(i.second%2);
        }
        if(odd!=0)
        {
            return (even*2)+1;
        }
        else
        {
            return even*2;
        }
    }
};