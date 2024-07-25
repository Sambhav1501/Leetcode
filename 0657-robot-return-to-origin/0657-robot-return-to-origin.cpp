class Solution {
public:
    bool judgeCircle(string moves) 
    {
        int size=moves.size();
        int x=0,y=0;
        for(int i=0;i<size;i++)
        {
            if(moves[i]=='R')
            {
                x++;
            }
            else if(moves[i]=='L')
            {
                x--;
            }
            else if(moves[i]=='U')
            {
                y++;
            }
            else if(moves[i]=='D')
            {
                y--;
            }
        }
        if(x==0&&y==0)
        return true;
        return false;
    }
};