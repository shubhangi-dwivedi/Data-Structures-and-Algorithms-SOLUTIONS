//419. Battleships in a Board
//https://leetcode.com/problems/battleships-in-a-board/description/

class Solution {
public:
    int dx[4]={-1,1,0,0};
    int dy[4]={0,0,-1,1};
    int countBattleships(vector<vector<char>>& board) {
        int n1=board.size(), n2=board[0].size(), count=0;
        vector<vector<bool>> visited(n1,vector<bool>(n2,false));

        for(int i=0;i<n1;i++){
            for(int j=0;j<n2;j++){
                if(board[i][j]=='X' && !visited[i][j]){
                    helper(board,n1,n2,i,j,visited);
                    count++;
                }
            }
        }
        return count;
    }

    void helper(vector<vector<char>>& board, int n1, int n2, int i, int j, vector<vector<bool>>& visited){
        if(i>=n1 || j>=n2 || i<0 || j<0 || board[i][j]=='.' || visited[i][j])
            return;
        
        visited[i][j]=true;

        for(int k=0;k<4;k++){
            helper(board,n1,n2,dx[k]+i,dy[k]+j,visited);
        }
        
    }
};