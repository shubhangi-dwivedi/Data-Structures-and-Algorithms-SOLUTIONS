//150. Evaluate Reverse Polish Notation

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
        
        for(string s: tokens)
        {
            if(s!="+" && s!="-" && s!="*" && s!="/")
                stk.push(stoi(s));
            else
            {
                int optr2=stk.top();
                stk.pop();
                int optr1=stk.top();
                stk.pop();
                
                if(s=="+")
                    stk.push(optr1+optr2);
                if(s=="-")
                    stk.push(optr1-optr2);
                if(s=="*")
                    stk.push(optr1*optr2);
                if(s=="/")
                    stk.push(optr1/optr2);
            }   
        }
        
        return stk.top();
    }
};