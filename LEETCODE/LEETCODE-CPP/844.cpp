//844. Backspace String Compare
//https://leetcode.com/problems/backspace-string-compare/

//Method-1 brute force using two stacks
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>stk1;
        stack<char>stk2;
        
        int i=0, j=0, n1=s.length(), n2=t.length();
        
        while(i<n1){
            if(s[i]!='#'){
                stk1.push(s[i]);
            }
            else if(!stk1.empty()){
                stk1.pop();
            }
            i++;
        }
        
        while(j<n2){
            if(t[j]!='#'){
                stk2.push(t[j]);
            }
            else if(!stk2.empty()){
                stk2.pop();
            }
            j++;
        }
        
        string x="",y="";
        if(stk1.size()==stk2.size()){
            while(!stk1.empty()){
                x.push_back(stk1.top());
                y.push_back(stk2.top());
                
                stk1.pop();
                stk2.pop();
            }
        }
        else{
            return false;
        }
        
        if(x==y){
            return true;
        }
        
        return false;
    }
};


//Method-2 using one stacks
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