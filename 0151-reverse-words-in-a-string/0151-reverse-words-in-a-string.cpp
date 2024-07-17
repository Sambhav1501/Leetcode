class Solution {
public:
    string reverseWords(string s) 
    {
        stack<string> st;
        string ans;
        string word;
        int size=s.size();
        for(int i=0;i<size;i++)
        {
            if(s[i]!=' ')
            {
                word=word+s[i];
            }
            else if(word.size()!=0)
            {
                st.push(word);
                word="";
            }
        }
        if(word.size()!=0)
        {
            st.push(word);
        }
        while(st.size()>1)
        {
            ans=ans+st.top()+' ';
            st.pop();
        }
        return ans+st.top();
    }
};