//1047. Remove All Adjacent Duplicates In String
//https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/description/

class Solution {
public:
    string removeDuplicates(string s) {
        string res;

        for(int i=0;i<s.length();i++)
            if(res.length() && res.back()==s[i])
                res.pop_back();
            else
                res.push_back(s[i]);

        return res;
    }
};