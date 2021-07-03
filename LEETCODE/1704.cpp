//Determine if String Halves Are Alike

class Solution {
public:
    bool halvesAreAlike(string s) {
        
        int count=0;
        
        for(int i=0;i<s.length()/2;i++)
        {
            s[i]=tolower(s[i]);
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' )
                count++;
        }
        
        for(int i=s.length()/2;i<s.length();i++)
        {
            s[i]=tolower(s[i]);
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' )
                count--;
        }

        if(count==0)
            return true;
        else
            return false;
    }
};