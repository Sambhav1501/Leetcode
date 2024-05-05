class Solution {
public:
    string reversePrefix(string word, char ch) 
    {
        int indx=word.find(ch);
        string ans="";
        if(indx!=string::npos)
        {
            reverse(word.begin(),(word.begin()+indx+1));
        }
        return word;
    }
};