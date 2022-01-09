//2011. Final Value of Variable After Performing Operations

class Solution {
public:
    int finalValueAfterOperations(vector<string>& op) {
        int n=op.size();
        int x=0;
        
        if(n!=0)
            for(int i=0;i<n;i++){
                if(op[i]=="X++" || op[i]=="++X")
                    x++;
                else
                    x--;
            }
        
        return x;
    }
};