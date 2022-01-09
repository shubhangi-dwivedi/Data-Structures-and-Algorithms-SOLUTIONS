//1662. Check If Two String Array are Equivalent

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        
        string s1="",s2="";
        
        for(int i=0;i<word1.size();i++)
            s1+=word1[i];
        
        for(int i=0;i<word2.size();i++)
            s2+=word2[i];
        
        return s1==s2;
    }
};