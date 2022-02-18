//Remove K Digits
//https://leetcode.com/problems/remove-k-digits/

class Solution {
public:
    string removeKdigits(string n, int k) {
        
        if(n.length()<=k)
            return "0";
        
        if(k==0)
            return n;
        
        stack<char> s;
        string res="";
        
        s.push(n[0]); // pushing first character into stack
        for(int i=1;i<n.length();i++){
            while(k && !s.empty() && n[i]<s.top()){
                // if k greater than 0 and our stack is not empty and the upcoming digit,
                // is less than the current top than we will pop the stack top
                s.pop();
                k--;
            }
            s.push(n[i]);
            
            // popping preceding zeroes
            if(s.size()==1 && n[i]=='0')
                s.pop();
        }
        
        while(k && !s.empty()){
            // for cases like "123456" where every num[i] > num.top()
            s.pop();
            k--;
        }
        
        while(!s.empty()){
            res+=s.top();
            s.pop();
        }
        
        reverse(res.begin(), res.end());
        
        if(res.length() == 0)
            return "0";

        
        return res;
        //if(res.length())
    }
};