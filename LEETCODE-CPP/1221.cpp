//1221. Split a String in Balanced Strings

class Solution {
public:
    int balancedStringSplit(string s) {
     
        int count=0,tot=0,n=s.length();
        
        for(int i=0;i<n;i++)
        {
            if(s[i]=='R')
                count++;
            else if(s[i]=='L')
                count--;
            
            if(count==0)
                tot++;
        }
        
        return tot;
    }
};