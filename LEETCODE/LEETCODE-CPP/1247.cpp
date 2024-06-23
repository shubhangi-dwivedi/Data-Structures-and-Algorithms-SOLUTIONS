//1247. Minimum Swaps to Make Strings Equal
//https://leetcode.com/problems/minimum-swaps-to-make-strings-equal/description/

class Solution {
public:
    int minimumSwap(string s1, string s2) {
        if(s1==s2)
            return 0;

        int x=0, y=0;

        for(int i=0;i<s1.size();i++){

            //if the both characters at an index are same, skip them
            if(s1[i]==s2[i])
                continue;
            
             //if they differ then calculate x and y count in the string
            if(s1[i]=='x')
                x++;
            else
                y++;
        }
   
        //if both x and y characters sum is odd we can't make them equal, return -1
        if((x+y)%2!=0)
            return -1;

        int res= (x+y)/2;
        if (x%2)
        {
            //if number of x are odd we need one more swap to make them equal
            res+=1;
        }
        return res;
    }
};