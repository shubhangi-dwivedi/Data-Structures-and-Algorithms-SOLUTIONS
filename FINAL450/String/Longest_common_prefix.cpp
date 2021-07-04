//https://leetcode.com/problems/longest-common-prefix/
//Longest Common Prefix

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        sort(strs.begin(),strs.end());
        
        int n=strs.size();
        string x=strs[0], y=strs[n-1]; 
        string s="";
        
        for(int i=0;i<x.size();i++)
        {
            if(x[i]==y[i])
                s+=x[i];
            else
                break;
        }
        
        return s;
        
    }
};