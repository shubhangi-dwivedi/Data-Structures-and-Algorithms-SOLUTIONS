//1249. Minimum Remove to Make Valid Parentheses
//https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses/

class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> stk;
        int l=s.length();
        
        for(int i=0;i<l;i++){            
            if(s[i]=='('){
                stk.push(i);
            }
            else if(s[i]==')'){
                if(!stk.empty())
                    stk.pop();
                else
                    s[i]='_';   // ) without ( 
            }   
        }
        
        //extra (
        while(!stk.empty()){
            s[stk.top()]='_';
            stk.pop();
        }
        
        string res;
        for(char c : s)
            if(c!='_')
                res+=c;
        
        return res;
    }
};