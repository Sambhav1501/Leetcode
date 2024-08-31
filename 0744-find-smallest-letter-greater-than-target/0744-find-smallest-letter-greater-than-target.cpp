class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) 
    {
        int size=letters.size();
        if(letters[size-1]<=target)
        {
            return letters[0];
        }
        int indx=binarySearch(letters,target);
        return letters[indx];
    }
    int binarySearch(vector<char>& letters, int target)
    {
        int r=letters.size()-1;
        int l=0;
        int mid=0;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(letters[mid]==target)
            {
                while(letters[mid]==target)
                {
                    mid++;
                }
                return mid;
            }
            else if(letters[mid]<target)
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        if(letters[mid]<target)
        {
            while(mid<letters.size()&&letters[mid]<target)
            {
                mid++;
            }
            return mid;
        }
        else
        {
            while(mid>=0&&letters[mid]>target)
            {
                mid--;
            }
            return mid+1;
        }
        return mid;
    }
};