//389. Find the Difference


//Method 1
class Solution {
public:
    char findTheDifference(string s, string t) {
        
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
        for(int i=0;i<s.length();i++)
            if(t[i]!=s[i])
                return t[i];
        
        return t[t.size()-1];
    }
};


//Method 2
class Solution {
public:
    char findTheDifference(string s, string t) {
        
     char res=0;
        
        for(char c: s)
            res^=c;
        
        for(char c: t)
            res^=c;
        
        return res;
    }
};