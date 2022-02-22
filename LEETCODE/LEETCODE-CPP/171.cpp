//171. Excel Sheet Column Number
//https://leetcode.com/problems/excel-sheet-column-number/

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans=0;
        int l=columnTitle.length();
        
        for(int i=0;i<l;i++){
            int x=columnTitle[i]-'A'+1;
            
            ans=ans*26+x;
        }
        
        return ans;
    }
};