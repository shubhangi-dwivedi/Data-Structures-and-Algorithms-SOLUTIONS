//917. Reverse Only Letters

class Solution {
public:
    string reverseOnlyLetters(string s) {
        int n=s.length(),j=n-1,i=0;
        while(i<j)
        {
            if(!isalpha(s[i]) )
                   i++;
             else if(!isalpha(s[j]))
                   j--;
            else
               {
                   swap(s[i],s[j]);
                   i++;j--;
               }
        }
        return s;
    }
};