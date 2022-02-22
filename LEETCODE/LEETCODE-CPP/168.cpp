//168. Excel Sheet Column Title
//https://leetcode.com/problems/excel-sheet-column-title/

class Solution {
public:
    string convertToTitle(int columnNumber) {
        string res="";
        
        
        while(columnNumber>0){
            columnNumber--;
            
            int x=columnNumber%26;
            res+=('A'+x);
            
            columnNumber/=26;
        }
        reverse(res.begin(),res.end());
        
        return res;
    }
};