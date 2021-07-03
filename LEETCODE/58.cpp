//58. Length of Last Word

class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int count=s.length()-1,res=0;
        
        while(count>=0 && s[count]==' ')
            count--;
        
        while(count>=0 && s[count]!=' ')
        {
            count--;
            res++;
        }
        
        return res;
    }
};