//1784. Check if Binary String Has at Most One Segment of Ones

class Solution {
public:
    bool checkOnesSegment(string s) {
        int n=s.length();
        
        if(n==1 && s[0]=='1')
            return true;
        
        for(int i=1;i<n;i++)
            if(s[i-1]=='0' && s[i]=='1')
                return false;
        
        return true;
        
    }
};