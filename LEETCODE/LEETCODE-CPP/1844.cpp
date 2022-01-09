//1844. Replace All Digits with Characters

//Both solutions are correct

//1.
/*class Solution {
public:
    string replaceDigits(string s) {
        
        int l=s.length();
        
        for(int i=1;i<l;i+=2)
            s[i]=s[i]+s[i-1]-'0';
        
        return s;
    }
};*/

//2.
class Solution {
public:
    string replaceDigits(string s) {
        
        int l=s.length();
        
        for(int i=1;i<l;i+=2)
            s[i]=char(s[i]+s[i-1]-'0');
        
        return s;
    }
};