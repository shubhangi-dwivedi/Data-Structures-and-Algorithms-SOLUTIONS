//1678. Goal Parser Interpretation

class Solution {
public:
    string interpret(string command) {
        
        string res="";
        
        for(int i=0;i<command.size();i++)
        {
            if(command[i]=='(')
            {
                if(command[i+1]==')')
                {
                    res+='o';
                    i+=1;
                }
                if(command[i+1]=='a' && command[i+2]=='l')
                {
                    res+="al";
                    i+=3;
                }
                    
            }
            if(command[i]=='G')
                res+='G';
        }
        
        return res;
    }
};