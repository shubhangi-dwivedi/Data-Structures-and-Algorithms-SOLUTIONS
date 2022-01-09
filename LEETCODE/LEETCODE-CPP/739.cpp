//739. Daily Temperatures

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        
        int n=temp.size();
        stack<int> stk;
        vector<int> res(n);
        
        stk.push(n-1);
        
        for(int i=n-2;i>=0;i--)
        {
            int x=temp[i];
            while(stk.size() && x>=temp[stk.top()])
                stk.pop();
            
            if(stk.size())
                res[i]=stk.top()-i;
            
            stk.push(i);
        }
        
        return res;
    }
};