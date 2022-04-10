//682. Baseball Game
//https://leetcode.com/problems/baseball-game/

class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> stk;
        
        for(int i=0;i<ops.size();i++){
            if(ops[i]=="C")
                stk.pop();
            else if(ops[i]=="D")
                stk.push(2*stk.top());
            else if(ops[i]=="+"){
                int x=stk.top();
                stk.pop();
                int y=stk.top();
                
                stk.push(x);
                stk.push(x+y);
            }
            else
                stk.push(stoi(ops[i]));
        }
        
        int sum=0;
        while(!stk.empty()){
            sum+=stk.top();
            stk.pop();
        }
        
        return sum;
    }
};