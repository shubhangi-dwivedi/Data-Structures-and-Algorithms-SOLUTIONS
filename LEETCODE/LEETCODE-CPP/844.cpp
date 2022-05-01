//844. Backspace String Compare
//https://leetcode.com/problems/backspace-string-compare/

//using stacks
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        stack<char> res1, res2;
        
        for(int i=0;i<s.length();i++){
            if(s[i]=='#' && !res1.empty())
                res1.pop();
            else if(s[i]!='#')
                res1.push(s[i]);
        }
        
        for(int i=0;i<t.length();i++){
            if(t[i]=='#' && !res2.empty())
                res2.pop();
            else if(t[i]!='#')
                res2.push(t[i]);
        }
                        
        return res1==res2;
    }
};