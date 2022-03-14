//71. Simplify Path
//https://leetcode.com/problems/simplify-path/

class Solution {
public:
    string simplifyPath(string path) {
        int n=path.size();
        stack<string> stk;  //to store directory
        
        for(int i=0;i<n;i++){
            string temp;    // to store directory
            
            if(path[i]=='/')
                continue;
            
            //store dir (a, b, c)
            while(i<n && path[i]!='/')
                temp+=path[i++];
            
            if(temp==".."){
                if(!stk.empty())
                    stk.pop();
            }
            else if(temp==".")
                continue;
            
            //pushing dir
            else
                stk.push(temp);
        }
        
        
        string res;
        while(!stk.empty()){
            res='/'+stk.top()+res;
            stk.pop();
        }
        
        if(res=="")
            return "/";
        
        return res;
    }
};