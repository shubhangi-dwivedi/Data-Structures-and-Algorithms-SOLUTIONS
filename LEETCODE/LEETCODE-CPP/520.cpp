//520. Detect Capital
//https://leetcode.com/problems/detect-capital/

class Solution {
public:
    bool detectCapitalUse(string w) {
        int l=w.length();
        int c=0;
        for(int i=0;i<l;i++)
            if(isupper(w[i]))
                c++;
        
        if(c==0 || c==l)
            return true;
        if(isupper(w[0]))
            if(c==1)
                return true;
            return false;
    }
};