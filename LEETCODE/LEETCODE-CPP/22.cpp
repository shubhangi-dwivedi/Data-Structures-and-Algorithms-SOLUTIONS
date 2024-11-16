//22. Generate Parentheses
//https://leetcode.com/problems/generate-parentheses/description/

//Method-1 using recursion
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s="";
        int open=0,close=0;

        helper(n,ans,s,open,close);
        
        return ans;
    }

    void helper(int &n, vector<string> &ans, string s, int open, int close){
        if(open==n && close==n){
            ans.push_back(s);
        }
        if(open<n){
            helper(n,ans,s+"(",open+1,close);
        }
        if(close<open){
            helper(n,ans,s+")",open,close+1);
        }
    }
};