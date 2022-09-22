//557. Reverse Words in a String III
//https://leetcode.com/problems/reverse-words-in-a-string-iii/

class Solution {
public:
    string reverseWords(string s) {
        for(int end = 0, start = 0; end <= s.size(); end++)
            if(s[end] == ' ' or s[end] == '\0'){           // The last word is tested using s[i]=='\0'
                reverse(s.begin()+start, s.begin()+end);
                start = end+1;
            }

        return s;
    }
};