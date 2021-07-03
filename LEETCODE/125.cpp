//125. Valid Palindrome

class Solution {
public:
    bool isPalindrome(string s) {
        string res="";
        
        int l=s.length();
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        for(int i=0;i<l;i++)
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9'))
                res+=s[i];
            
        int l2=res.size();
        int end=res.size()-1;
        
        
        for(int i=0;i<l2/2;i++)
            if(res[i]!=res[end--])
                return false;
        
        return true;

    }
};