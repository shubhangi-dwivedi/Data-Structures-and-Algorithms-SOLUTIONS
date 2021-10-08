//1816. Truncate Sentence

class Solution {
public:
    string truncateSentence(string s, int k) {
        
        string s1="";
        int count=0;
        
        for(int i=0;i<s.length();i++)
        {   
            if(s[i]==' ')
                count++;
            
            if(count<k)
                s1+=s[i];
            else
                break;
        }
        
        return s1;
    }
};