class Solution {
public:
    string decodeMessage(string key, string message) 
    {
        char ch='a';
        unordered_map<char,char> map;
        for(int i=0;i<key.size();i++)
        {
            if(key[i]!=' '&&map.find(key[i])==map.end())
            {
                map[key[i]]=ch;
                ch++;
            }
        }
        string ans;
        for(int i=0;i<message.size();i++)
        {
            if(message[i]==' ')
            ans=ans+" ";
            else
            ans=ans+map[message[i]];
        }
        return ans;
    }
};