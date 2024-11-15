//17. Letter Combinations of a Phone Number
//https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/

//Method-1 recursion
class Solution {
    public:
        vector<string> letterCombinations(string digits) {
            if(digits.length()==0)
                return {};
            vector<string> letter_comb = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
            vector<string> ans;
            string temp="";
    
            helper(digits,letter_comb,ans,temp,0);
    
            return ans;
        }
    
        void helper(string &digits, vector<string> &letter_comb, vector<string> &ans, string temp, int idx){
            if(idx==digits.length()){
                ans.push_back(temp);
                return;
            }
    
            string s=letter_comb[digits[idx]-'2'];
            for(char x: s){
                helper(digits,letter_comb,ans,temp+x,idx+1);
            }
        }
    };