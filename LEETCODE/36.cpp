//36. Valid Sudoku

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        map<char,int> row[9],column[9],block[9];
        char ch;
        
        for(int i=0;i<9;i++)
            for(int j=0;j<9;j++)
            {
                ch=board[i][j];
                if((ch!='.')&&(row[i][ch]++>0 || column[j][ch]++>0 || block[(i/3)*3+j/3][ch]++>0))
                   return false;
            }
                   
        return true;
        
    }
};