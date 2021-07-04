//https://leetcode.com/problems/reverse-string/
//Reverse String

class Solution {
public:
    void reverseString(vector<char>& s) 
    {
        int start=0, end=s.size()-1;
        
        for(int i=0;i<s.size()/2;i++)
            swap(s[start++],s[end--]);
    }
};