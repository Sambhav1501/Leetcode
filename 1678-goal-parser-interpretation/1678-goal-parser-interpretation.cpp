class Solution {
public:
    string interpret(string command) 
    {
        int size=command.size();
        string ans;
        int i=0;
        while(i<size)
        {
            if(command[i]=='G')
            {
                ans=ans+"G";
                i++;
            }
            else if(command[i]=='(')
            {
                if(command[i+1]==')')
                {
                    ans=ans+"o";
                    i=i+2;
                }
                else if(command[i+1]=='a')
                {
                    ans=ans+"al";
                    i=i+4;
                }
            }
        }
        return ans;
    }
};