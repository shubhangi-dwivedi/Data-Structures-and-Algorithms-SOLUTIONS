//20. Valid Parentheses
//https://leetcode.com/problems/valid-parentheses/


//Method-1 using stack
class Solution {
public:
    bool isValid(string s) {
        
        stack<char> st;
        
        for(char& c: s){
            switch(c){
                case '(':
                case '{':
                case '[': st.push(c);
                    break;
                case ')':
                    if(st.empty() || st.top()!='(')
                        return false;
                    else
                        st.pop();
                    break;
                case '}':
                    if(st.empty() || st.top()!='{')
                        return false;
                    else
                        st.pop();
                    break;
                case ']':
                    if(st.empty() || st.top()!='[')
                        return false;
                    else
                        st.pop();
                    break;
                    
                default: 
                    ;
            }
        }
        return st.empty();
    }
};