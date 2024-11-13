//784. Letter Case Permutation
//https://leetcode.com/problems/letter-case-permutation/description/

//Method-1 Brute force
class Solution {
public:
    vector<string> letterCasePermutation(string s) {
        vector<string> res;
        
        res.push_back(s);
        for(int i=0;i<s.length();i++)
            if(!(isdigit(s[i])))
            {
                int l=res.size();
                for(int j=0;j<l;j++)
                {
                    string temp= res[j];
                    temp[i]^=32;
                    res.push_back(temp);
                }
            }
        return res;
        
    }
};

//Method-2 Recursion & backtracking
class Solution {
public:
    vector<string> letterCasePermutation(string s) {
        int n=s.length();
        vector<string> ans;
        set<string> temp;

        helper(s,temp,0,n);
        ans={temp.begin(),temp.end()};

        return ans;
    }

    void helper(string &s, set<string>&temp,int idx, int n){
        if(idx==n){
            temp.insert(s);
            return;
        }

        helper(s,temp,idx+1,n);

        if(islower(s[idx])){
            s[idx]=toupper(s[idx]);
            helper(s,temp,idx+1,n);
            s[idx]=tolower(s[idx]);
        }
        else if(isupper(s[idx])){
            s[idx]=tolower(s[idx]);
            helper(s,temp,idx+1,n);
            s[idx]=toupper(s[idx]);
        }
            
        
    }
};