//784. Letter Case Permutation

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