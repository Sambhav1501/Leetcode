class Solution {
public:
    bool isValid(string word) 
    {
        int size=word.size();
        bool flagv=false,flagc=false;
        if(size<3)
        {
            return false;
        }
        for(int i=0;i<size;i++)
        {
            if((word[i]>='0'&&word[i]<='9')||(word[i]>='a'&&word[i]<='z')||(word[i]>='A'&&word[i]<='Z'))
            {
                if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u'||word[i]=='A'||word[i]=='E'||word[i]=='I'||word[i]=='O'||word[i]=='U')
                {
                    flagv=true;
                }
                else if(((word[i]>='a'&&word[i]<='z')||(word[i]>='A'&&word[i]<='Z'))&&word[i]!='a'&&word[i]!='e'&&word[i]!='i'&&word[i]!='o'&&word[i]!='u'&&word[i]!='A'&&word[i]!='E'&&word[i]!='I'&&word[i]!='O'&&word[i]!='U')
                {
                    flagc=true;
                }
            }
            else
            {
                return false;
            }
        }
        if(flagv&&flagc)
        {
            return true;
        }
        return false;
    }
};