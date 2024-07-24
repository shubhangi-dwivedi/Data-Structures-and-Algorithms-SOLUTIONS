//2716. Minimize String Length
//https://leetcode.com/problems/minimize-string-length/

class Solution {
public:
    int minimizedStringLength(string s) {
        int n=s.length();
        set<char> s2;
        for(int i=0;i<n;i++)
            s2.insert(s[i]);

        return s2.size();
    }
};