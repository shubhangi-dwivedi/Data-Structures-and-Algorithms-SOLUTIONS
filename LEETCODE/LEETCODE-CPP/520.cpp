//520. Detect Capital
//https://leetcode.com/problems/detect-capital/

class Solution {
public:
    bool detectCapitalUse(string word) {
        int cap_count=0;
        for(int i=0;i<word.length();i++)
            if(isupper(word[i]))
                cap_count++;

        if(cap_count==0 || cap_count==word.length())
            return true;
        if(cap_count==1 && isupper(word[0]))
            return true;

        return false;

    }
};