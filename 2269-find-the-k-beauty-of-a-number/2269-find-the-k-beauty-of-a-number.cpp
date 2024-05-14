class Solution {
public:
    int divisorSubstrings(int num, int k) 
    {
        string s=to_string(num);
        int len=s.length();
        int count=0;
        for(int i=0;i<len-k+1;++i)
        {
            int temp=stoi(s.substr(i,k));
            if(temp!=0&&num%temp==0)
            ++count;
        }
        return count;
    }
};