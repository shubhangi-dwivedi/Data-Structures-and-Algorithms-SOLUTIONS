//2116. Check if a Parentheses String Can Be Valid
//https://leetcode.com/problems/check-if-a-parentheses-string-can-be-valid/description/

class Solution {
public:
    bool canBeValid(string s, string locked) {
        int n=s.length();

        if(n%2!=0){
            return false;
        }

        int openBracket=0,unlock=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                openBracket++;
            }
            else if(locked[i]=='0'){
                unlock++;
            }
            else if(s[i]==')'){
                if(openBracket>0){
                    openBracket--;
                }
                else if(locked[i]=='0'){
                    unlock++;
                }
                else{
                    unlock--;
                }
            }

            if(unlock+openBracket<0){
                return false;
            }
        }


        int closedBracket=0;
        unlock=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]==')'){
                closedBracket++;
            }
            else if(locked[i]=='0'){
                unlock++;
            }
            else if(s[i]=='('){
                if(closedBracket>0){
                    closedBracket--;
                }
                else if(locked[i]=='0'){
                    unlock++;
                }
                else{
                    unlock--;
                }
            }

            if(unlock+closedBracket<0){
                return false;
            }
        }

        return true;
    }
};