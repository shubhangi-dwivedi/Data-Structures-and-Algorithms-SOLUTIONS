//2109. Adding Spaces to a String
//https://leetcode.com/problems/adding-spaces-to-a-string/

//Method -1 using two-pointer
class Solution {
public:
    string addSpaces(string& s, vector<int>& spaces) {
        int m = spaces.size(), n = s.size();
        string t(n + m, ' ');
        
        int j = 0; // Pointer for spaces
        for (int i=0; i<n; i++) {
            if (j<m && i==spaces[j]) {
                j++; 
            }
            t[i+j]=s[i]; // Add the character from the original string
        }
        return t;
    }
};