//1704. Determine if String Halves Are Alike
//https://leetcode.com/problems/determine-if-string-halves-are-alike/description/

class Solution {
public:
    bool halvesAreAlike(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        int l=0, u=s.length()-1;

        int vow1=0,vow2=0;

        while(l<u){
            if(s[l]=='a'||s[l]=='e'||s[l]=='i'||s[l]=='o'||s[l]=='u')
                vow1++;
            if(s[u]=='a'||s[u]=='e'||s[u]=='i'||s[u]=='o'||s[u]=='u')
                vow2++;

            l++,u--;
        }

        if(vow1==vow2)
            return true;

        return false;
    }
};