//1753. Maximum Score From Removing Stones
//https://leetcode.com/problems/maximum-score-from-removing-stones/

//Method-1 (max heap)
class Solution {
public:
    int maximumScore(int a, int b, int c) {
        priority_queue<int>q;
        
        q.push(a);
        q.push(b);
        q.push(c);
        
        int res=0;
        while(q.size()>1){
            int x=q.top()-1;
            q.pop();
            
            int y=q.top()-1;
            q.pop();
            
            if(x)
                q.push(x);
            if(y)
                q.push(y);
            
            res++;
        }
        
        return res;
    }
};

//Method-2 (mathematics)
class Solution {
public:
    int maximumScore(int a, int b, int c) {
        int half=(a+b+c)/2;
            
        if(a>half)
            return b+c;
        else if(b>half)
            return a+c;
        else if(c>half)
            return a+b;
        else
            return half;
    }
};