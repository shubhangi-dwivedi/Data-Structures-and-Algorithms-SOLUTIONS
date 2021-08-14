//345. Reverse Vowels of a String

class Solution {
public:
    string reverseVowels(string s) {
        
        int l=s.length();
        int i=0,j=l-1;
        unordered_set<char> vowels{'A','E','I','O','U','a','e','i','o','u'};        
        
        while(i<j){
            while(i<l && !vowels.count(s[i]))
                i++;
            
            while(j>=0 && !vowels.count(s[j]))
                j--;
            
            if(i<j){
                swap(s[i],s[j]);
                i++,j--;
            }
        }
        return s;
    }
};